#include<stdio.h>
#include<conio.h>
//LA PHUONG NAM

int main(){
    int j=0,n,a[69],sum=0,style;
    double tbc;
    printf("\n Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("\n Nhap phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n Nhap kieu tinh: ");
    scanf("%d",&style);
    switch(style){
        case 1:
            for(int i=0;i<=n;i++){
                if(a[i]<=0){
                    j++;
                    sum+=a[i];
                }
            }
                tbc=(sum*1.0)/j;
                printf("%lf",tbc);
            
            break;
        case 2:
            for(int i=0;i<=n;i++){
                if(a[i]>=0){
                    j++;
                    sum+=a[i];
                }
                }
                tbc=(sum*1.0)/j;
                printf("%lf",tbc);
                break;
            
        case 3:
            for(int i=0;i<=n;i++){
                if(a[i]%2==0){
                    j++;
                    sum+=a[i];
                }
            }
                tbc=(sum*1.0)/j;
                printf("%lf",tbc);
                break;
            
        case 4:
            for(int i=0;i<=n;i++){
                if(a[i]%2!=0){
                    j++;
                    sum+=a[i];
                }
            }
                tbc=(sum*1.0)/j;
                printf("%lf",tbc);
                break;
            
    }
}