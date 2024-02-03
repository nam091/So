#include<stdio.h>
#include<conio.h>

int main(){
    int a[100],n,temp,sum=0;
    int *ptr= NULL;
    scanf("%d",n);
    for(int i=0;i<=n;i++){
    scanf("%d", &a[i]);
    sum += a[i];
    }
    // for(int i=0;i<=n;i++){
    //     ptr=&a[i];
    //     if(*ptr <= *(ptr+1)){
    //         temp=*ptr;
    //         *ptr=*(ptr+1);
    //         *(ptr+1)=temp;
    //     }
    // }
    printf("%d",sum);
    return 0;
}