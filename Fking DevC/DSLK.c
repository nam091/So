#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Sinhvien{
	int ma;
	char name[150];
}Sinhvien;

typedef struct node{
	Sinhvien *data;
	struct node *pnext;
}node;

typedef struct Singlelist{
	node *phead;
}Singlelist;

void initialize(Singlelist** list){
	*list = (Singlelist*)malloc(sizeof(Singlelist));
	(*list)->phead = NULL;
}

Sinhvien* Indata(){
	Sinhvien *sv = (Sinhvien*)malloc(sizeof(Sinhvien));
	printf("Nhap ma sv: "); scanf("%d", &sv->ma);
	getchar();
	printf("Nhap ten sv: "); 
	fgets(sv->name,sizeof(sv->name),stdin);
	sv->name[strcspn(sv->name, "\n")] = '\0';
	return sv;
}

node* createnode(Sinhvien* sv){
	node *pNode = (node*)malloc(sizeof(node));
	if(pNode != NULL){
		pNode->data = sv;
		pNode->pnext = NULL;
	}else printf("Cap phat bo nho that bai!!!\n");
	return pNode;
}

void Insertlast(Singlelist* list, Sinhvien* sv){
	node *pNode = createnode(sv);
	if(list->phead == NULL){
		list->phead = pNode;
	}else{
		node *ptemp = list->phead;
		while(ptemp->pnext != NULL){
			ptemp = ptemp->pnext;			
		}
		ptemp->pnext = pNode;
	}
}

void printlist(Singlelist* list){
	node* pNode = list->phead;
	if(pNode == NULL){
		printf("Danh sach rong!!\n");
		return;
	}else{
		printf("%-10s %-15s\n", "Ma", "Ho va ten");
		while(pNode != NULL){
			printf("%-10d %-15s\n", pNode->data->ma, pNode->data->name);
			pNode = pNode->pnext;
		}
	}
}

void removeNode(Singlelist* list){
	int findma;
	printf("Nhap ma so sv ban muon xoa: ");
	scanf("%d", &findma);
	getchar();
	node* pNode = list->phead;
	node* prev = NULL;
	if(pNode == NULL){
		printf("Danh sach rong!!\n");
	}else{
		while(pNode != NULL){
			if(pNode->data->ma == findma){
				if(prev == NULL){
					list->phead = pNode->pnext;
				}else{
					pNode->pnext = prev->pnext;
				}
				printf("Da xoa thanh cong!!\n");
				return;
			}
			prev = pNode;
			pNode = pNode->pnext;
		}
		printf("Khong tim thay sinh vien ma : %d\n", findma);
	}
}

void sortlist(Singlelist* list){
	node* pNode = list->phead;
	node* temp;
	Sinhvien* sv;
	if(pNode == NULL){
		printf("Danh sach rong!!\n");
	}else{
		while(pNode->pnext != NULL){
			sv = pNode->data;
			if(sv->ma > pNode->pnext->data->ma){
				temp = pNode->pnext;
				pNode->pnext = pNode;
				pNode = temp;
			}
			pNode = pNode->pnext;
		}
	}
}

void choice(){
	printf("==========================\n");
	printf("1. Nhap sinh vien\n");
	printf("2. In danh sach\n");
	printf("3. Xoa sinh vien\n");
	printf("5. Thoat\n");
	printf("==========================\n");
}

int main(){
	int ch, n;
	Singlelist *list;
	initialize(&list);
	do{
		choice();
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &n);
		switch(n){
			case 1:
				printf("Nhap so luong sinh vien ban muon them: ");
				scanf("%d", &ch);
				do{
					Sinhvien* sv = Indata();
					Insertlast(list,sv);
					ch--;
				}while(ch != 0);
				break;
			case 2:
				printlist(list);
				break;
			case 3:
				removeNode(list);
				break;
			case 5:
				return 0;
			}
	}while(n!=5);
	return 0;
}
