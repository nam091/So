#include<stdio.h>
#include<conio.h>
//LA PHUONG NAM

int main(){
int i,a[69],chan[69],le[69],n,j=0,z=0;
printf("\n Nhap so phan tu cua mang: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    printf("Nhap phan tu a[%d]: = ",i);
    scanf("%d",&a[i]);
}
for(i=0;i<=n;i++){
    if(a[i]%2==0){
        chan[j]=a[i];
        j++;
    }else {
        le[z]=a[i];
        z++;}
}
for(i=0;i<j;i++)   printf("%d",chan[i]);
printf("\n");
for(i=0;i<z;i++)   printf("%d",le[i]);

}