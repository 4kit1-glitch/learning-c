// This program prints a chess board 

#include<stdio.h>
#include<ctype.h>

#define BOARD_SIZE 8
#define PIECE_NUM  6

int main(){

    char chess_board[BOARD_SIZE][BOARD_SIZE];
    char pieces_code[PIECE_NUM] = {'r','n','b','q','k','p'};
    char black = '.';
    char white = ' ';

    for(int i = 0; i < BOARD_SIZE ; i++){

        switch (i){

            case 0:
                for(int j = 0; j < BOARD_SIZE; j++){   
                    
                    chess_board[i][j] = pieces_code[j];

                    if(j > 4){
                        chess_board[i][5] = pieces_code[2];
                        chess_board[i][6] = pieces_code[1];
                        chess_board[i][7] = pieces_code[0];
                        break;
                    }
                }
            break;

            case 1:
                for(int j = 0; j < BOARD_SIZE; j++){

                    chess_board[i][j] = pieces_code[5];
                }
            break;

            case 6:
                for(int j = 0; j < BOARD_SIZE; j++){

                    chess_board[i][j] = toupper(pieces_code[5]);
                }
            break;

            case 7:
                for(int j = 0; j < BOARD_SIZE; j++){   
                    
                    chess_board[i][j] = toupper(pieces_code[j]);

                    if(j > 4){
                        chess_board[i][5] = toupper(pieces_code[2]);
                        chess_board[i][6] = toupper(pieces_code[1]);
                        chess_board[i][7] = toupper(pieces_code[0]);
                        break;
                    }
                }
            break;

            case 3:
            case 5:
                for(int j = 0; j < BOARD_SIZE; j++){
                    if(j%2 == 0 ){
                        chess_board[i][j] = black;
                    }
                    else{
                        chess_board[i][j] = white;
                    }
                }
            break;

            case 2:
            case 4:
                for(int j = 0; j < BOARD_SIZE; j++){
                    if(j%2 == 0 ){
                        chess_board[i][j] = white;
                    }
                    else{
                        chess_board[i][j] = black;
                    }
                }
            break;
        
            default:
                break;
        
        }

    }


    // printing the board

    for(int i = 0;i < BOARD_SIZE; i++){
        for(int j = 0; j< BOARD_SIZE; j++){
            printf("%3c",chess_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}