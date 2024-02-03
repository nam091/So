#include<stdio.h>

int main(){
    int n, a[100], s;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &s);
    if(n - s == 0 || n - s == n)
        for(int i = 0; i < n; i++)
            printf("%d ", a[i]);
    else {
        for(int i = n - s; i < n; i++)
            printf("%d ", a[i]);
        for(int i = 0; i < n - s; i++)
            printf("%d ", a[i]);
    }
}