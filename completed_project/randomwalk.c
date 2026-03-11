// Program simulates a random walk each walk is represented by a letter 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<stdbool.h>

#define SIZE 8

int main()
{
    srand((unsigned) time(NULL));

    char walk_area[8][8];
    const char LETTERS[26] = { 
                                'A','B','C','D','E','F','G',
                                'H','I','J','K','L','M','N',
                                'O','P','Q','R','S','T','U',
                                'V','W','X','Y','Z'

                             };
    int move, move_count, i, j, k;
    char direction;
    char clear_space ='.';
    bool is_blocked;
    bool is_out_of_board;

    // drawing walk area

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            walk_area[i][j] = clear_space;
        }
    }

    walk_area[0][0] = LETTERS[0];
    move_count = 1;
    i = 0;
    j = 0;
    k = 1;

    while((i < 8 && j < 8) || is_blocked == false || k < 26){
        move = rand() % 4;

        switch (move)
        {
            case 0: direction = 'T'; break;
            case 1: direction = 'L'; break;
            case 2: direction = 'R'; break;
            case 3: direction = 'B'; break;
        
            default: break;
        }
        if(direction == 'T'){
            if(i - 1 < 0){
                is_out_of_board = true;
                move = rand() % 4;
            }
            else{
                is_out_of_board = false;
            }

            if(is_out_of_board == false){
                walk_area[i - 1][j] = LETTERS[k+1];
                k++;
                i--;

            }

        }
        else if(direction == 'L'){
            if(j - 1 < 0){
                is_out_of_board = true;
                move = rand() % 4;
            }
            else{
                is_out_of_board = false;
            }
            if(is_out_of_board == false){
                walk_area[i][j - 1] = LETTERS[k + 1];
                k++;
                j--;
            }

        }
        else if(direction == 'R')
        {
            if (j + 1 > SIZE){
                is_out_of_board = true;
            }
            else{
                is_out_of_board = false;
                move = rand() % 4;
            }

            if(is_out_of_board == false){
                walk_area[i][j + 1] = LETTERS[k + 1];
                k++;
                j++;
            }
        }
        else if(direction == 'B'){
            if(i + 1 > SIZE){
                is_out_of_board = true;
                move = rand() % 4;
            }
            else{
                is_out_of_board = false;
            }
            if (is_out_of_board == false)
            {
                walk_area[i + 1][j = LETTERS[k + 1]];
                k++;
                i++;
            }
            
        }
        if(walk_area[i+1][j] != '.'
            || walk_area[i-1][j] != '.'
            || walk_area[i][j+1] != '.'
            || walk_area[i][j-1] != '.'
            )
        {
            is_blocked = true;
        }
        else{
            is_blocked = false;
        }

        move_count += 1;
    }

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            printf("%c",walk_area[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}