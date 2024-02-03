#include<stdio.h>
#define SIZE 5

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

int main(){
    int testCases;
    scanf("%d", &testCases);

    int testCasesArr[testCases][25]; // Khai báo mảng hai chiều để lưu trữ các test case

    for(int i = 0; i < testCases; i++){
        int n, bef, aft;
        int str[25];
        scanf("%d", &n);
        ini_str(str);
        for(int j = 0; j < n; j++){
            scanf("%d %d", &bef, &aft);
            swapValues(str,bef,aft);
        }
        for(int j = 0; j < 25; j++) {
            testCasesArr[i][j] = str[j]; // Lưu trữ các giá trị của test case vào mảng hai chiều
        }
    }

    // In kết quả của tất cả các test case
    for(int i = 0; i < testCases; i++) {
        printf("Case #%d:\n", i+1);
        printOutput(testCasesArr[i]);
    }

    return 0;
}