#include<stdio.h>
#include <stdbool.h>

bool isPrime(long long int n){
    if(n <= 1)
        return false;
    for(long long int i = 2; i*i < n; i++)
        if(n % i == 0)
            return false;
    else return true;
}

int main(){
    long long int n;
    scanf("%lld", &n);
    isPrime(n) ? printf("True") : printf("False");
    return 0;
}