#include<stdio.h>

int main(){
int n, a[100], x, count = 0;
printf("Nhap do dai cua day so: " );
scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d cua day: ", i);
        scanf("%d", &a[i]);
    }
printf("Nhap so X can tim trong day: ");
scanf("%d", &x);

printf("Day vua nhap la: ");
    for(int i = 0; i < n; i++){
        // check(x, i, a[i], count);
        if(x == a[i]){
            count++;
            if(count == 0 || count == 1){
                printf("%d ", a[i]);
            }
        }
        else{
            printf("%d ", a[i]);
        }
    }

    if(count == 0)
        printf("\nSo %d khong xuat hien trong day", x);
    else
        printf("\nSo %d xuat hien trong day %d lan", x, count);
return 0;
}