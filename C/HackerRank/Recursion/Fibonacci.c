#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int fibonaci(int n){
    return (n == 1) ? 0 : (n == 2) ? 1 : fibonaci(n-1) + fibonaci(n-2); 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", fibonaci(n));
    return 0;
}
