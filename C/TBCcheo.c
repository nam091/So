#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n,a[i][j],sum=0;
    printf("\nNhap chieu do dai cua mang 2 chieu: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Nhap phan tu a[%d][%d]: ", i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0, j=0;i<n;i++ & j++){
            sum=sum+(a[i][j]);
    }
        printf("\n%lf",sum/n);
    return 0;
}