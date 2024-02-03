#include<stdio.h>

int main(){
    int  n,a,b,c,d;
    scanf("%d",&n);
    a=n/100;
    b=(n-a*100)/10;
    c=(n-a*100-b*10);
    d=pow(a,3)+pow(b,3)+pow(c,3);
    if(d==n) printf("%d",n);
}