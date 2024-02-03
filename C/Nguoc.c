#include<stdio.h>
#include<conio.h>
//LA PHUONG NAM

int main(){
int i,a[69],n;
printf("\n Nhap so phan tu cua mang: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    printf("Nhap phan tu a[%d]: = ",i);
    scanf("%d",&a[i]);
}
for(int i=n;i>=0;i--)   printf("%d",a[i]);
}
