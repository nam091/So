#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool nguyento(int n);

int main(){
    int number;
    scanf("%d",&number);
    if(nguyento(number)==true) printf("%d la so nguyen to",number);
    else printf("%d khong phai la so nguyen to",number);
}
bool nguyento(int n){
    if(n<2)
        return false;
    for(int i=1;i<=pow(n,1/2);i++){
        if(n%i==0) return false;
    }
    return true;
}