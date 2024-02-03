#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct Sinhvien{
    int ma;
    char ten[150];
    char lop[50];
    int year;
}Sinhvien;

void ghifile(char *fname){
    int n;
    Sinhvien sv;
    f =fopen(fname, "ab");
    printf("Nhap so luong ban muon them: ");
    scanf("%d", &n);
    for(int i = 0; i < n;i++){
        printf("Nhap sinh vien thu %d: ", i+1);
        fflush(stdin);
        printf("Ma sinh vien: ");
        gets(sv.ma);
        printf("Ho va ten Sinh vien: ");
        fgets(sv.ten, sizeof(sv.ten), stdin);
        sv.ten[strcspn(sv.ten, "\n")] = '\0';

    }
}

int main(){
    FILE *f;
    char name[] = "DS_SV";
    f = fopen(name,"ab");
    if(f == NULL){
        printf("Khong the mo file!!!\n");
        return 1;
    }
    fclose(f);
    return 0;
}