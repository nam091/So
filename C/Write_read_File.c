#include<stdio.h>

void input(int n){
    int a[n];
    FILE *fp;
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    fp = fopen("BAI1.txt", "w");
    for(int i = 0; i < n; i++){
        fprintf(fp, "%d ", a[i]);
    }
    fclose(fp);
}

void output( int n){
    FILE *fp;
    int arr[n], temp;
    fp = fopen("BAI1.txt", "r");
    if(fp == NULL ) printf("Khong the mo file");
    fgetc(fp);
    for(int i = 0; i < n; i++)
        fscanf(fp, "%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    fp = fopen("BAI1.txt", "w");
    for(int i = 0; i < n; i++)
        fprintf(fp, "%d ", arr[i]); 
    fclose(fp);
}
int main(){
    int n;
    scanf("%d", &n);
    input(n);
    output(n);
}