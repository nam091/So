#include<stdio.h>

int main(){
    int a[50],n,temp,sum=0;
    int *p;
    printf("\n Nhap so phan tu cua mang: ");
    scanf("%d",&n);
  for(int i = 0; i < n; ++i) {
      printf("\nNhap phan tu a[%d]= ",i+1);
      scanf("%d", p+i);
      sum += *(p+i);
  }
  for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
        if(*(p+i)>=*(p+j)){
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
    }
  }
  for(int i =0; i<n;i++){
    printf("%d",*(p+i));
  }
    printf("%d",sum);
    return 1;
}
