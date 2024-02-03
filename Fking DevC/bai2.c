#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct Sinhvien{
	int ma;
	char ten[150];
}Sinhvien;

typedef struct Node{
	Sinhvien* data;
	struct Node* pNext;
}Node;

typedef struct Singlelist{
	Node* phead;
}Singlelist;

Singlelist* initialize(Singlelist** list){
	*list = (Singlelist*)malloc(sizeof(Singlelist));
	(*list)->phead = NULL;
}

Node* createNode(Sinhvien* sv){
	Node* pNode = (Node*)malloc(sizeof(Node));
	pNode->data = sv;
	pNode->pNext = NULL;
	return pNode;
}

void Insertlast(Singlelist* list, Sinhvien* sv);

Sinhvien* Indata(Singlelist* list){
	Sinhvien* sv = (Sinhvien*)malloc(sizeof(Sinhvien));
	printf("Nhap ma sv: "); scanf("%d", &sv->ma); getchar();
	printf("Nhap ho va ten sv: "); 
	fgets(sv->ten,sizeof(sv->ten), stdin);
	sv->ten[strcspn(sv->ten, "\n")] = '\0';
	Insertlast(list, sv);
	return;
}

void Insertlast(Singlelist* list, Sinhvien* sv){
	Node* pNode = createNode(sv);
	Node* temp = list->phead;
	if(list->phead == NULL){
		list->phead = pNode;
	}else{
		while(temp->pNext != NULL){
			temp = temp->pNext;
		}temp->pNext = pNode;
	}
}

void printlist(Singlelist* list){
	Node* pNode = list->phead;
	if(pNode == NULL){
		printf("Danh sach rong!!\n");
	}else{
		printf("%-10s %-15s\n","Ma", "Ho va ten");
		while(pNode != NULL){
			printf("%-10d %-15s\n", pNode->data->ma, pNode->data->ten);
			pNode = pNode->pNext;
		}
	}
}

void removeNode(Singlelist* list){
	int findma;
	printf("Ma so sv can xoa: "); scanf("%d", &findma);
	Node* pNode = list->phead;
	Node* prev = NULL;
	if(list->phead == NULL){
		printf("Danh sach rong!!\n");
	}else
		while(pNode != NULL){
			if(pNode->data->ma == findma){
				if(prev == NULL){
					list->phead = list->phead->pNext;
				}else{
					prev->pNext = pNode->pNext;
				}
				printf("Xoa thanh cong!!\n");
				return;
			}
			prev = pNode;
			pNode = pNode->pNext;
		}
	printf("khong tim thay ma so sv %d\n", findma);
}

void findsv(Singlelist* list){
	int findma;
	printf("Ma so sv can tim: ");
	scanf("%d", &findma);
	Node* pNode = list->phead;
	if(pNode == NULL){
		printf("Danh sach rong!!\n");
	}else{
		printf("%-10s %-15s\n","Ma", "Ho va ten");
		while(pNode != NULL){
			printf("%-10d %-15s\n", pNode->data->ma, pNode->data->ten);
			pNode = pNode->pNext;
		}
}
}

void choice(){
	printf("====================\n");
	printf("1. Nhap TT sv\n");
	printf("2. in danh sach\n");
	printf("3. Xoa SV\n");
	printf("4. Tim kiem sv\n");
	printf("5. Thoat\n");
	printf("====================\n");
}

int main(){
	int n, ch;
	Singlelist* list;
	initialize(&list);
	do{
		choice();
		printf("Nhap lua chon cua ban!!\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				Indata(list);
				break;
			case 2:
				printlist(list);
				break;
			case 3:
				removeNode(list);
				break;
			case 4:
				findsv(list);
				break;
		}
	}while(ch!=5);
	return 0;
}
