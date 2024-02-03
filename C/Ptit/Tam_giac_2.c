#include<stdio.h>

int main(){
    int n;
    char *str = NULL;
    char *temp = str;
    if(temp == NULL)
        temp ="";
    scanf("%d", &n);

    for( int  i = n; i >= 0; i--){
        for( int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    
    printf("\n");
        for( int  i = n-1; i >= 0; i--){
        for( int j = 0; j <= i; j++){
            if(j==0)
            for(int x = 1; x < n-i; x++)
                printf("%-1s",temp);
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
        for( int  i = 0; i < n; i++){
        for( int j = 0; j <= i; j++){
            if(j==0)
                for(int x = n-i-1; x > 0; x--)
                    printf("%-1s", temp);
                printf("*");
        }
        printf("\n");
    }

    printf("\n");
        for( int  i = 0; i < n; i++){
        for( int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}