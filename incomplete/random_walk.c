// Code simulates  a random walk 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define AREA_SIZE 10
#define MOVE_COUNT 4

#include<stdio.h>

void create_walk_area(char walk_area[][AREA_SIZE]) {
    for (int i = 0; i < AREA_SIZE; i++) {
        for (int j = 0; j < AREA_SIZE; j++) {
            walk_area[i][j] = '.';
        }
    }
}
void generate_random_walk(char walk_area[][AREA_SIZE]){
    int move, row, col, next_row, next_col, count;
    char indicator = 'A'; // indicator what diplays after every move
    char next_move;

    srand((unsigned) time(NULL));

    row = 0;
    col = 0;

    // start position
    walk_area[row][col] = indicator;
    count = 1;

    while (count <= 26) {
        next_move = rand() % MOVE_COUNT;

    // move behavior
        if (next_move == 0) {
            next_row = row - 1;
            next_col = col;
        }
        else if (next_move == 1) {
            next_row = row + 1;
            next_col = col;
        }
        else if (next_move == 2) {
            next_col = col - 1;
            next_row = row;
        }
        else if (next_move == 3) {
            next_col = col + 1;
            next_row = row;
        }
        else {
            next_col = col;
            next_row = row;
        }

        // setting move boundaries
        bool out_of_bounds =
            next_row < 0            ||
            next_col < 0            ||
            next_row >= AREA_SIZE   ||
            next_col >= AREA_SIZE;
        
        if (out_of_bounds) {
            continue;
        }

        // normal move
        if (!out_of_bounds) {
            row = next_row;
            col = next_col;
            bool occupied = walk_area[row][col] != '.';
            bool no_space =
                walk_area[row + 1][col] != '.'  ||
                walk_area[row][col + 1] != '.'  ||
                walk_area[row - 1][col] != '.'  ||
                walk_area[row][col - 1] != '.';

            if (occupied) {
                if (!out_of_bounds && no_space) {
                    return;
                }
                continue;
            }
            walk_area[next_row][next_col] = indicator + count;
            count++;
        }
    }
}
void print_area(char walk_area[][AREA_SIZE]) {
    for (int i = 0; i < AREA_SIZE; i++) {
        for (int j = 0; j < AREA_SIZE; j++) {
            printf("%2c", walk_area[i][j]);
        }
        putchar('\n');
    }
}


int main() {
    char walk_area[AREA_SIZE][AREA_SIZE];

    printf("before walk\n");

    //create and print walk area
    create_walk_area(walk_area);
    print_area(walk_area);



    return 0;
}