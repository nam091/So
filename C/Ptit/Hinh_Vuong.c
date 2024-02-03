#include<stdio.h>

int row();

int main(){
    int n,a=0;

    scanf("%d", &n);

        for(int i = 0; i < n-1; i++){
                if(i==0) for(int j = 0; j<2*n-1; j++) printf("%d", n);
                else {
                    for(int m = 0; m <= i; m++){
                        printf("%d", n-m);
                    }
                    for(int x = i+1; x <= n-2; x++){
                        printf("%d", n-i);
                    }
                    if(i==n-1) printf("1");
                    else printf("%d", n-i);
                        for(int x = n-1; x <= i+1; x++){
                        printf("%d", n-i);
                    }
                    for(int x = n-2; x >= i+1; x--){
                        printf("%d", );
                    }
                printf("\n");
        }
        for(int i = 0; i < 2*n-1; i++){
            if(i<=n-2) printf("%d", n-i);
            else if(i==n-1) printf("1");
            else printf("%d", i-n+2);
        }printf("\n");
}
}