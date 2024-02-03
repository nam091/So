#include<stdio.h>
#include<conio.h>
//LA PHUONG NAM
int main(){
int i=0,j,tam,a[20],n;
printf("\n Nhap so phan tu cua mang: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    printf("Nhap phan tu a[%d]: = ",i);
    scanf("%d",&a[i]);
}
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(a[i]<=a[j]){
            tam=a[i];
            a[i]=a[j];
            a[j]=tam;
        }
    }
}
for(i=0;i<=n;i++)   printf("%d",a[i]);
printf("\n");
for(i=n;i>=0;i--)   printf("%d",a[i]);
}