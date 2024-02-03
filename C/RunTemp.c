#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int sum(int n){
    return (n == 1) ? 1 : n*sum(n-1); 
}

int main() {
    int n;
    scanf("%d", &n);
    n = abs(n);
    if(n == 0)
        printf("%d", n);
    else
        printf("%lld", sum(n));
    return 0;
}
