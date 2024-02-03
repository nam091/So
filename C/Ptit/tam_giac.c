#include<stdio.h>

int main(){
    int n,le,chan;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        le = -1;
        chan = 0;
        if(i%2==1){
            for(int j = 1; j <= i; j++){
                le+=2;
                printf("%d", le);
                }
                printf("\n");
        }
        else{
            for(int j = 1; j <= i; j++){
                chan+=2;
                printf("%d", chan);
                }
                printf("\n");
        }
    }
    return 0;
}