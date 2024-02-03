#include<stdio.h>

int main(){
    int i; int n; int a[10]; int max = 0;
    for(i = 0; i < 5; i++){
        printf("Nhap a[%d] = ", i+1);
        scanf("%d", &a[i]);
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d", max);
    return 0;
}