#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int sum(int n){
    return (n == 0) ? 0 : pow(-1,n)*n + sum(n-1); 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", sum(n));
    return 0;
}
