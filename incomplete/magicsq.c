// Prints a magic square of size n x n, where n is an odd integer greater than 1.

#include <stdio.h>

int main(){
    int size , row, col, next_row, next_col;
    int magic_sqr[size][size];

    printf("Enter the size of the magic square (odd integer btw 1 and 99): ");
    scanf("%d", &size);

    // filling square with 0 for easy manipulation
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            magic_sqr[i][j] = 0;
        }
    }

    row = 0;
    col = size / 2;
    magic_sqr[row][col] = 1;

    for(int num = 2; num <= (size * size); num++){
        next_row = row - 1;
        next_col = col + 1;

        if(next_row < 0){
            next_row = size - 1;
        }
        if(next_col == size){
            next_col = 0;
        }

        if(magic_sqr[next_row][next_col] != 0){
            next_row = size + 1;
            magic_sqr[next_row][next_col] = num;
        }
        else{
            magic_sqr[next_row][next_col] = num;
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%2d", magic_sqr[i][j]);
        }
        printf("\n");
    }


    





    return 0;
}