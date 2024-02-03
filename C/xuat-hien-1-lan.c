#include<stdio.h>

int main(){
    int a[100],n,b[100],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                b[i]++;
            }
        }
        if(b[i]==1) count++;
    }
    printf("\n%d\n", count);
    for(int i=0;i<n;i++){
        if(b[i]==1)
            printf("%d ", a[i]);
    }
    return 0;
}