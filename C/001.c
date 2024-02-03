#include <stdio.h>

int main(){
    int n,sum;
    scanf("%d",&n);
    sum=0;
    for(int i=0;i<=n;i++) sum+=i;
    printf("%d", sum);
}