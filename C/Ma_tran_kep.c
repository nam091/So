#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n,a[i][j],max,min,temp;
    printf("\nNhap chieu do dai cua mang 2 chieu: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Nhap phan tu a[%d][%d]: ", i+1 , j+1);
            scanf("%d",&a[i][j]);
            if(j==0 && i==0){
                max=a[i][j];
                min=a[i][j];
            }else if(a[i][j]>max) max = a[i][j];
            else if(a[i][j]<min)  min = a[i][j];
        }
    }    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]>=a[i][j+1]){
                 temp=a[i][j+1];
                 a[i][j+1]=a[i][j];
                 a[i][j]=temp;
                }
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    printf("Gia tri lon nhat trong mang la: %d",min);
    printf("\nGia tri nho nhat trong mang la: %d\n",max);
    return 0;
}