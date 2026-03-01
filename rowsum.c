// program comutes the sum of rows and columns

#include<stdio.h>

#define ROW_SIZE 5
#define COLUMN_SIZE 5

int main()
{
    int array[ROW_SIZE][COLUMN_SIZE] = {0};
    int row_sum, column_sum , count;
   
    for(int i = 0; i < ROW_SIZE;i++){
        printf("Enter Row %d:",i+1);
        for(int j = 0; j< COLUMN_SIZE; j++){
            scanf(" %d",&array[i][j]);
        }
        printf("\n");
    }

    printf("row sum: ");
    for(int i = 0; i < ROW_SIZE; i++){
        row_sum = 0;
        for(int j = 0; j < COLUMN_SIZE; j++){
            row_sum = row_sum + array[i][j];
        }
        printf("%d ",row_sum);
    }
    printf("column sum: ");
    for(int i = 0; i < ROW_SIZE; i++){
        column_sum = 0;
        for(int j = 0; j < COLUMN_SIZE; j++){
            column_sum = column_sum + array[j][i];
        }
        printf("%d ",row_sum);
    }

    return 0;
}