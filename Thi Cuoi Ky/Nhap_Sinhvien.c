#include<stdio.h>
#include<string.h>
#include<conio.h>

typedef struct {
    char ma[100];
    char name[100];
    int year;
}Sinhvien;

void Readfile(char *filename);
void writefile(char *filename);
void search(char *filename);
void suatt(char *filename);

void writefile(char *filename){
    FILE *f;
    int n,i;
    Sinhvien sv;
    f = fopen(filename, "ab");
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Sinh vien thu %d\n", i+1);
        fflush(stdin);
        printf("Ma sinh vien: ");
        gets(sv.ma);
        printf("Ten Sinh vien: ");
        gets(sv.name);
        printf("Nam sinh cua Sinh vien: ");
        scanf("%d", &sv.year);
        fwrite(&sv, sizeof(sv), 1, f);
    }
        fclose(f);
        printf("\nNhap phim bat ki de tiep tuc!!!");
        getch();
}

void Readfile(char *filename){
    int STT = 1;
    FILE *f;
    Sinhvien sv;
    f = fopen(filename, "rb");
    printf("%-5s %-10s %-15s %-10s\n", "STT", "Ma SV", "Ho ten", "Nam sinh");
    fread(&sv, sizeof(sv), 1, f);
    while(!feof(f)){
        printf("%-5d %-10s %-15s %-10d\n", STT, sv.ma, sv.name, sv.year);
        STT++;
        fread(&sv, sizeof(sv), 1, f);
    }
    fclose(f);
    printf("\nNhap phim bat ki de tiep tuc!!!");
    getch();
}

void search(char *filename){
    int STT = 1;
    char MSSV[100];
    int found = 0;
    Sinhvien sv;
    FILE *f;
    printf("Nhap MSSV can tim kiem: ");
    fflush(stdin);
    fgets(MSSV, sizeof(MSSV), stdin);
    MSSV[strcspn(MSSV, "\n")] = '\0';
    f = fopen(filename, "rb");
    rewind(f);
    while(!feof(f) && found == 0){
        if(strcmp(sv.ma, MSSV)){
            found = 1;
        }
        fread(&sv, sizeof(sv), 1, f);
    }
    if(found == 1){
        printf("Sinh vien ban can tim voi MSSV la %s co thong tin\n", sv.ma);
        printf("%-5s %-10s %-15s %-10s\n", "STT", "Ma SV", "Ho ten", "Nam sinh");
        printf("%-5d %-10s %-15s %-10d\n", STT, sv.ma, sv.name, sv.year);
    }else{
        printf("Khong tim thay sinh vien voi MSSV la %c", MSSV);
    }
    fclose(f);
    printf("\nNhap phim bat ki de tiep tuc!!!");
    getch();
}

void suatt(char *filename){
    int choice;
    char MSSV[100];
    int found = 0;
    FILE *f;
    Sinhvien sv;
    f = fopen(filename, "ab+");
    printf("Nhap ma so SV can sua: ");
    fflush(stdin);
    fgets(MSSV, sizeof(MSSV), stdin);
    MSSV[strcspn(MSSV, "\n")] = '\0';
    fread(&sv, sizeof(sv), 1, f);
    while(!feof(f) && found == 0){
        if(strcmp(sv.ma,MSSV)){
            found = 1;
            break;
        }
        fread(&sv, sizeof(sv), 1, f);
    }
    if(found == 1){
        fflush(stdin);
        printf("Nhap lai ten: ");
        gets(&sv.name);
        printf("Nhap lai nam sinh: ");
        scanf("%d", &sv.year);
        fseek(f, -(long)sizeof(sv), SEEK_CUR);
        fwrite(&sv, sizeof(sv), 1, f);
        fflush(f);
        printf("Sua thong tin thanh cong!!!");
    }else{
        printf("Khong the tim thay MSSV : %d", MSSV);
        printf("Ban co muon tim lai khong?\n");
        printf("==========\n");
        printf("1. Co\n");
        printf("2. Khong\n");
        printf("==========\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        if(choice == 1){
            suatt(filename);
        }
    }
    fclose(f);
    printf("\nNhap phim bat ki de tiep tuc!!!");
    getch();
}

int main(){
    int choice;
    FILE *f;
    f = fopen("DS_SV.c", "ab");
    fclose(f);
    do
    {
        Head:
        printf("\n=====================\n");
        printf("1. Nhap DSSV\n");
        printf("2. Hien thi danh sach SV\n");
        printf("3. Tim kiem\n");
        printf("4. Sua thong tin\n");
        printf("5. Thoat\n");
        printf("=====================\n");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                writefile("DS_SV.c");
                break;
            case 2:
                Readfile("DS_SV.c");
                break;
            case 3:
                search("DS_SV.c");
                break;
            case 4:
                suatt("DS_SV.c");
                break;
            case 5:
                printf("\nKet thuc chuong trinh!!!\n");
                return 0;
            default:
                printf("\nHay nhap lai trong khoang tu 1 den 4!!!\n");
                // sleep(1);
                goto Head;
        }
    } while (choice <= 5);
    return 0;
}