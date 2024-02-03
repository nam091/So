#include<stdio.h>

int main(){
    int n,m;
    char *p = " ";
    printf("Nhap kich thuoc n, m cua hinh chu nhat: ");
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            if(i == 0 || i == n-1 || j == 0 || j == m-1)
                printf("%-10s", "*");
            else
                printf("%-10s", " ");
        printf("\n");
    }
    return 0;
}