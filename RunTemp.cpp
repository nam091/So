#include<stidio.h>

int main(){
    int i; int n; int a[10]; int max;
    for(int i = 0; i < 5; i++){
        printf("Nhap a[%d]", i);
        scanf("%d", &a[i]);
        max = a[0];
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d", max);
    return 0;
}