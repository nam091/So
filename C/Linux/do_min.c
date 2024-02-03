#include<stdio.h>
#include<stdlib.h>

void initialize(char **matrix, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf(" %c", &matrix[i][j]);
        }
    }
}

void check_boom(char **matrix, int *sum, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] != '*'){
                for(int x = i-1; x <= i+1; x++){
                    for(int y = j-1; y <= j+1; y++){
                        if(x>=0 && x<row && y>=0 && y<col && matrix[x][y] == '*'){
                            (*sum)++;
                        }
                    }
                }
            }
        }
    }
}

int main(){
    int row, col;
    int t;
    scanf("%d", &t);
    int sum[t];
    for(int i = 0; i < t; i++){
        scanf("%d %d", &row, &col);
        char **matrix = (char **)malloc(row * sizeof(char *));
        for(int i = 0; i < row; i++){
            matrix[i] = (char *)malloc(col * sizeof(char));
        }
        initialize(matrix, row, col);
        sum[i] = 0;
        check_boom(matrix, &sum[i], row, col);
        for(int i = 0; i < row; i++){
            free(matrix[i]);
        }
        free(matrix);
    }
    for(int i = 0; i < t; i++)
        printf("Case #%d: %d", i+1, sum[i]);
    return 0;
}