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

void ghifile(char *fname);
	
	
void ghifile(char *fname){
	FILE *f;
    int n,i;
    Sinhvien sv;
    f = fopen(fname, "ab");
    if(f == NULL){
        printf("Khong the mo file!!!\n");
        return;
    }
    printf("Nhap so luong ban muon them: ");
    scanf("%d", &n);
    for(i = 0; i < n;i++){
        printf("Nhap sinh vien thu %d\n", i+1);
        fflush(stdin);
        
		printf("Ma sinh vien: ");
        scanf("%d", &sv.ma);
        getchar();
        
		printf("Ho va ten Sinh vien: ");
        fgets(sv.ten, sizeof(sv.ten), stdin);
        sv.ten[strcspn(sv.ten, "\n")] = '\0';
        
		printf("Nhap ten lop hoc: ");
        fgets(sv.lop, sizeof(sv.lop), stdin);
        sv.lop[strcspn(sv.lop, "\n")] = '\0';
        
		printf("Nhap nam sinh: ");
        scanf("%d", &sv.year);
        getchar();
        fwrite(&sv, sizeof(sv), 1, f);
    }
    fclose(f);
    printf("Nhap thanh cong!!!\n");
    getchar();
}

void docfile(char *fname){
	FILE *f = fopen(fname, "rb");
	rewind(f);
	if(f == NULL){
        printf("Khong the mo file!!!\n");
        return;
    }
    int n, i;
    fread(&n, sizeof(n), 1, f);
    Sinhvien* sv = (Sinhvien*)malloc(n * sizeof(Sinhvien));
    printf("%-10s %-20s %-10s %-10s\n", "Ma", "Ho va ten", "Lop", "Nam sinh");
    for(i = 0; i < n; i++){
    	fread(&sv[i], sizeof(sv), 1, f);
		printf("%-10d %-20s %-10s %-10d\n", sv[i].ma, sv[i].ten, sv[i].lop, sv[i].year);
	}
	fclose(f);
}

void search(char *fname){
	FILE *f = fopen(fname, "rb");
	if(f == NULL){
        printf("Khong the mo file!!!\n");
        return;
    }
    int n, i, findma;
	fread(&n, sizeof(n), 1, f);
	Sinhvien* sv = (Sinhvien*)malloc(n * sizeof(Sinhvien));
	printf("Nhap ma sv ban muon tim: ");
	scanf("%d", &findma);
	getchar();
	for(i = 0; i < n; i++){
		fread(&sv[i], sizeof(sv), 1, f);
		if(findma == sv[i].ma){
			printf("%10s %-20s %10s %-10s\n", "Ma", "Ho va ten", "Lop", "Nam sinh");
			printf("%10d %-20s %10s %-10d\n", sv[i].ma, sv[i].ten, sv[i].lop, sv[i].year);
			return;
		}
	}
	fclose(f);
}

void removesv(char *fname){
	FILE *f = fopen(fname, "rb");
	if(f == NULL){
        printf("Khong the mo file!!!\n");
        return;
    }
    int n, i, findma;
	fread(&n, sizeof(n), 1, f);
	Sinhvien* sv = (Sinhvien*)malloc(n * sizeof(Sinhvien));
	printf("Nhap ma sv ban muon tim: ");
	scanf("%d", &findma);
	getchar();
	for(i = 0; i < n; i++){
		fread(&sv[i], sizeof(sv), 1, f);
		if(findma == sv[i].ma){
			
		}
	}
	fclose(f);
}

int main(){
    FILE *f;
    char name[] = "DS_SV.c";
    f = fopen(name,"ab");
    if(f == NULL){
        printf("Khong the mo file!!!\n");
        return 1;
    }
    ghifile(name);
    docfile(name);
    fclose(f);
    return 0;
}
