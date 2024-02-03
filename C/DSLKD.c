#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tạo cấu trúc sinh viên
struct SinhVien {
    int ma;
    char ten[150];
};

// tạo cấu trúc node danh sách liên kết đơn
struct Node {
    struct SinhVien *data;
    struct Node *pNext;
};

// tạo cấu trúc danh sách liên kết đơn
struct SingleList {
    struct Node *pHead;
};

// khởi tạo danh sách liên kết đơn
void Initialize(struct SingleList **list) {
    *list = (struct SingleList*) malloc(sizeof(struct SingleList));
    (*list)->pHead = NULL;
}

// nhập thông tin sinh viên
struct SinhVien* NhapSinhVien() {
    struct SinhVien *sv = (struct SinhVien*) malloc(sizeof(struct SinhVien));
    printf("Nhap MSSV: ");
    scanf("%d", &sv->ma);
    fflush(stdin);
    printf("Nhap ho va ten: ");
    gets(sv->ten);
    return sv;
}

// tạo node sinh viên
struct Node* CreateNode(struct SinhVien *sv) {
    struct Node *pNode = (struct Node*) malloc(sizeof(struct Node));
    if (pNode != NULL) {
        pNode->data = sv;
        pNode->pNext = NULL;
    } else {
        printf("cap phat bo nho that bai!!!");
    }
    return pNode;
}

// thêm node vào cuối danh sách
void InsertLast(struct SingleList *list, struct SinhVien *sv) {
    struct Node *pNode = CreateNode(sv);
    if (list->pHead == NULL) {
        list->pHead = pNode;
    } else {
        struct Node *pTmp = list->pHead;
        while (pTmp->pNext != NULL) {
            pTmp = pTmp->pNext;
        }
        pTmp->pNext = pNode;
    }
}

// hiển thị danh sách
void PrintList(struct SingleList *list) {
    struct Node *pTmp = list->pHead;
    if (pTmp == NULL) {
        printf("Danh sach rong");
        return;
    }
    while (pTmp != NULL) {
        struct SinhVien *sv = pTmp->data;
        printf("%d\t%s\n", sv->ma, sv->ten);
        pTmp = pTmp->pNext;
    }
}

// sắp xếp
void SortList(struct SingleList *list) {
    struct Node *pTmp, *pTmp2;
    struct SinhVien *svTmp, *svTmp2;
    for (pTmp = list->pHead; pTmp != NULL; pTmp = pTmp->pNext) {
        for (pTmp2 = pTmp->pNext; pTmp2 != NULL; pTmp2 = pTmp2->pNext) {
            svTmp = pTmp->data;
            svTmp2 = pTmp2->data;
            if (svTmp2->ma < svTmp->ma) {
                int ma = svTmp->ma;
                char ten[150];
                strcpy(ten, svTmp->ten);
                svTmp->ma = svTmp2->ma;
                strcpy(svTmp->ten, svTmp2->ten);
                svTmp2->ma = ma;
                strcpy(svTmp2->ten, ten);
            }
        }
    }
}

// xóa
void RemoveNode(struct SingleList *list, int ma) {
    struct Node *pDel = list->pHead;
    if (pDel == NULL) {
        printf("Danh sach rong!");
    } else {
        struct Node *pPre = NULL;
        while (pDel != NULL) {
            struct SinhVien *sv = pDel->data;
            if (sv->ma == ma)
                break;
            pPre = pDel;
            pDel = pDel->pNext;
        }
        if (pDel == NULL) {
            printf("khong tim thay MSSV: %d", ma);
        } else {
            if (pDel == list->pHead) {
                list->pHead = list->pHead->pNext;
                pDel->pNext = NULL;
                free(pDel);
                pDel = NULL;
            } else {
                pPre->pNext = pDel->pNext;
                pDel->pNext = NULL;
                free(pDel);
                pDel = NULL;
            }
        }
    }
}

int main() {
    struct SingleList *list;
    Initialize(&list);
    struct SinhVien *teo = NhapSinhVien();
    InsertLast(list, teo);
    struct SinhVien *ty = NhapSinhVien();
    InsertLast(list, ty);
    struct SinhVien *bin = NhapSinhVien();
    InsertLast(list, bin);
    PrintList(list);
    SortList(list);
    printf("\nSau khi sap xep:\n");
    PrintList(list);
    printf("\nBan muon xoa sinh vien co MSSV: ");
    int ma;
    scanf("%d", &ma);
    RemoveNode(list, ma);
    printf("\nSau khi xoa:\n");
    PrintList(list);
    return 0;
}