#include<stdio.h>
#include<conio.h>

int main(){
    FILE *f;
    f = fopen("Number.txt", "wb");
    if(f != NULL){
		double d = 3.14;   
		int i = 101;   
		long l = 54321; 
        fwrite(&d, sizeof(double), 1, f);
        fwrite(&i, sizeof(int), 1, f);
        fwrite(&l, sizeof(long), 1, f);

        rewind(f);
        fread(&d, sizeof(double), 1, f);
        fread(&i, sizeof(int), 1, f);
        fread(&l, sizeof(long), 1, f);
        printf("%f \n%d \n%ld", d, i, l);
        fclose(f);
    }
    else{
        printf("Khong the mo file!!!");
    }
    return 0;
}