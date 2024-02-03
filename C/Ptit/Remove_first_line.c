#include<stdio.h>
#include<stdlib.h>

void scan(int *m, int *n){
    scanf("%d%d", m, n);
}

int** input(int m, int n){
    int** a = (int**) malloc(m * sizeof(int*));
    for(int i = 0; i < m; i++)
        a[i] = (int*) malloc(n * sizeof(int));
    for(int i = 1; i < m; i++)
        for(int j = 1; j < n; j++)
            scanf("%d", &a[i][j]);
    return a;
}

void output(int m, int n, int** a){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
}

int main(){
    int m,n, count;
    scanf("%d", &count);
    while(count--){
    scan(&m, &n);
    int** a = input(m,n);
    output(m,n,a);
    for(int i = 0; i < m; i++)
        free(a[i]);
    free(a);
    }
    return 0;
}