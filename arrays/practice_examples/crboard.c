// this program creates stores and prints a checkers board

#include<stdio.h>
#include<stdbool.h>

#define ROW_SIZE 8
#define COLUMN_SIZE 8
#define BLACK 'B'
#define RED 'R'

int main()
{
    char checker_board[ROW_SIZE][COLUMN_SIZE];
    bool is_black;
    bool is_even = true;

    for(int i = 0; i < ROW_SIZE; i++){
        if(i%2 == 0){
            is_black = true;

        }
        else{
            is_black = false;
        }
        for(int j = 0; j < COLUMN_SIZE; j++){
            if(is_black){
                checker_board[i][j] = BLACK;
                is_black = false;
            }
            else{
                checker_board[i][j] = RED;
                is_black = true;
            }
        }
        is_black = true;
    }



    for(int i = 0; i<ROW_SIZE; i++){
        for(int j = 0; j < COLUMN_SIZE; j++){
            printf("%3c",checker_board[i][j]);
        }
        printf("\n");
    }
}