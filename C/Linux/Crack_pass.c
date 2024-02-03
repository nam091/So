#include<stdio.h>
#define SIZE 5

void readInput(int testCases);
void swapValues(int *str, int bef, int aft);
void printOutput(int *str);

void ini_str(int *str){
    for(int i = 1; i <= 25; i ++ ){
        str[i] = i;
        printf("%d ", i);
        if(i % 5 == 0){
            printf("\n");
        }
    }
}

void printOutput(int *str){
    for(int i = 1; i <= 25; i ++){
        printf("%d ", str[i]);
        if(i % 5 == 0){
            printf("\n");
        }
    }
}

void swapValues(int *str,int bef, int aft){
    int x = bef;
    int y = aft;
    int temp, temp2;
    temp = str[y];
    if(x < y){
        str[y] = str[x];
        for(int i = x+1; i <= y-1; i++){
            str[i-1] = str[i];
        }
        str[y-1] = temp;
    }else if(x > y){
        str[y] = str[x];
        for(int i = y; i < x; i++){
            temp2 = str[i+1];
            str[i+1] = temp;
            temp = temp2;
        }
    }
}

void readInput(int testCases){
    int n, bef, aft;
    int str[25];
    for(int i = 1; i <= testCases; i++){
        scanf("%d", &n);
        ini_str(str);
        for(int i = 0; i < n; i++){
            scanf("%d %d", &bef, &aft);
            swapValues(str,bef,aft);
        }
        printf("Case #%d:\n", i);
        printOutput(str);
    }
}

int main(){
    int testCases;
    scanf("%d", &testCases);
    readInput(testCases);
    return 0;
}