#include<stdio.h>
int sumu(int vari, int mu);

int main(){
    int number,hamu;
    printf("\nNhap bien: ");
    scanf("%d",&number);
    printf("\nNhap mu: ");
    scanf("%d",&hamu);
    if(hamu==0) 
    printf("Result = 1 ");
    else
    printf("Result = %d ",sumu(number, hamu));
}
int sumu(int vari, int mu){
    if(mu==1) return vari;
    else return vari * sumu(vari,mu-1);
}