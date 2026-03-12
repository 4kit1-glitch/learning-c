// Code simulates  a random walk 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define AREA_SIZE 10
#define LABLE_SIZE ((int) sizeof(lables) / sizeof(lables[0]))


void draw_walk_area(char walk_area[][AREA_SIZE]);
bool is_blocked(int move);
bool in_walk_area(char arr[][AREA_SIZE], int move);

int main(){
    srand((unsigned) time(NULL));   // Incorperating srand and the time func ensures 

    char walk_area[AREA_SIZE][AREA_SIZE];
    char lable = 'A';




    return 0;
}

void draw_walk_area(char arr[][AREA_SIZE]){
    for(int i = 0; i < AREA_SIZE; i++){
        for(int j = 0; j < AREA_SIZE; j++){
            arr[i][j] = '.';
        }
    }
}

bool in_walk_area(char arr[][AREA_SIZE], int move){
    if ()
}