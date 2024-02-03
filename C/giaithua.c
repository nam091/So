#include<stdio.h>
int giaithua(int n);

int main(){
    int number,result;
    scanf("%d",&number);
    result=giaithua(number);
    printf("ket qua: %d", result);
}
int giaithua(int n){
    if(n!=1) return n * giaithua(n-1);
    else return n;
}