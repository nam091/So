#include <stdio.h>

int main(){
    int n;
    double sum;
    scanf("%d",&n);
    sum=0;
    for(int i=1;i<=n;i++) sum+=1/i;
    printf("%lf", sum);
}