#include<stdio.h>
#include<math.h>
#include <stdbool.h>
#include<stdlib.h>

int checking(long long n){
    bool* isPrime = (bool*) malloc((n+1) * sizeof(bool));
    for(int i = 2; i < sqrt(n); i++){
        isPrime[i] = true;
    }
    for(int i = 2; i*i < n; i++){
        if(isPrime[i] == true){
            for(int j = 2; j <= n; j += i){
                isPrime[i] = false;
                if(j == n){
                    printf("False");
                }else printf("True");
            }
        }
    }
}

int main(){
    long long n;
    n = 100031231;
    checking(n);
    return 0;
}
