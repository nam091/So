#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Sinhvien{
	int ma;
	char ten[150];
	char lop[100];
}Sinhvien;

typedef struct Node{
	Sinhvien* data;
	struct Node* pNext;
}Node;

typedef struct Singlelist{
	Node* phead;
}Singlelist;

void Insertlast(Singlelist* list, Sinhvien* sv);
Node initialize(Singlelist** list);

Node initialize(Singlelist** list){
	*list = (Singlelist*)malloc(sizeof(Singlelist));
	(*list)->phead = NULL;
}

Node* createNode(Sinhvien* sv){
	Node* pNode = (Node*)malloc(sizeof(Node));
	if(pNode == NULL){
		printf("Cap phat bo nho that bai!!\n");
	}else{
		pNode->data = sv;
		pNode->pNext = NULL;
	}
	return pNode;
}

Sinhvien* Nhaptt(Singlelist* list){
	Sinhvien* sv = (Sinhvien*)malloc(sizeof(Sinhvien));
	printf("Nhap ma sv: "); scanf("%d", &sv->ma); getchar();
	printf("Nhap ho va ten sv: "); fgets(sv->ten,sizeof(sv->ten),stdin);
	sv->ten[strcspn(sv->ten, "\n")] = '\0';
	printf("Nhap ten lop: "); scanf("%s", &sv->lop);
	getchar();
	Insertlast(list,sv);
	return;
}

void Insertlast(Singlelist* list, Sinhvien* sv){
	Node* pNode = createNode(sv);
	if(list->phead == NULL){
		list->phead = pNode;
	}else{
		Node* temp = list->phead;
		while(temp->pNext != NULL){
			temp = temp->pNext;
		}
		temp->pNext = pNode;
	}
}

void printlist(Singlelist* list){
	Node* pNode = list->phead;
	if(pNode == NULL){
		printf("Danh sach rong!!\n");
		return;
	}else{
		printf("%-10s %-15s %-10s\n", "Ma", "Ho va ten", "Lop");
		while(pNode != NULL){
			printf("%-10d %-15s %-10s\n", pNode->data->ma, pNode->data->ten, pNode->data->lop);
			pNode = pNode->pNext;
		}
	}
}

void removeNode(Singlelist* list){
	int findma;
	printf("Nhap ma sv muon xoa: "); scanf("%d", &findma);
	Node* pNode = list->phead;
	Node* prev = NULL;
	while(pNode != NULL){
		if(findma == pNode->data->ma){
			if(prev == NULL){
				list->phead = list->phead->pNext;
			}else{
				prev->pNext = pNode->pNext;
			}
			printf("xoa thanh cong!!!\n");
			return;
		}
		prev = pNode;
		pNode = pNode->pNext;
	}
	printf("khong tim thay ma so sv %d\n", findma);
}

void choice(){
	printf("======================\n");
	printf("1. Nhap thong tin sv\n");
	printf("2. In danh sach\n");
	printf("3. Xoa sv\n");
	printf("4. \n");
	printf("5. Thoat\n");
	printf("======================\n");
}


int main(){
	int n, ch = 0;
	Singlelist* list;
	initialize(&list);
	Sinhvien* sv;
	do{
		choice();
		printf("Nhap lua chon cua ban: "); scanf("%d", &ch);
		getchar();
		switch(ch){
			case 1:
				printf("Nhap so luong sinh vien ban muon them: ");
				scanf("%d", &n);
				while(n != 0){
					sv = Nhaptt(list);
					n--;
				}
				break;
			case 2:
				printlist(list);
				break;
			case 3:
				removeNode(list);
				break;
			case 4:
				break;
		}
	}while(ch != 5);
	return 0;
}
