#include<stdio.h>

int main(){
    int n, count;
    char *temp = "";
    scanf("%d", &n);

    for( int  i = n-1; i >= 0; i--){
        for( int j = 0; j <= i; j++)
        if(i==n-1)
            printf("*");
        else 
            if(j==0 || j== i) printf("*");
            else printf("%-1s", temp);
        printf("\n");
    }
    
    printf("\n");
        for( int  i = n-1; i >= 0; i--){
        for( int j = 0; j <= i; j++){
            if(j==0)
            for(int x = 1; x < n-i; x++)
                printf("%-1s",temp);
            
            if(i==n-1)
            printf("*");
        else 
            if(j==0 || j== i) printf("*");
            else printf("%-1s", temp);
        }
        printf("\n");
    }
    printf("\n");
        for( int  i = 0; i < n; i++){
        for( int j = 0; j <= i; j++){
            if(j==0)
                for(int x = n-i-1; x > 0; x--)
                    printf("%-1s", temp);
        if(i==n-1)
            printf("*");
        else 
            if(j==0 || j == i) printf("*");
            else printf("%-1s", temp);
        }
        printf("\n");
    }

    printf("\n");
        for( int  i = 0; i < n; i++){
        for( int j = 0; j <= i; j++)
        if(i==n-1)
            printf("*");
        else 
            if(j==0 || j== i) printf("*");
            else printf("%-1s", temp);
        printf("\n");
    }
    return 0;
}