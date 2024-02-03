#include<stdio.h>

void compare();
int main(){
    compare();
}
void compare()
{
    int a,b;
    printf("\nNhap 2 so can so sanh: ");
    scanf("%d%d",&a , &b);
    if(a>b) printf("%d", a);
    else  printf("%d", b);
};