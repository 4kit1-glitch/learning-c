// Code simulates  a random walk 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define AREA_SIZE 10

#include<stdio.h>

void create_walk_area(char walk_area[][AREA_SIZE]){
    for(int i = 0; i < AREA_SIZE; i++){
        for(int j = 0; j < AREA_SIZE; j++){
            walk_area[i][j] = '.';
        }
    }

}
void generate_random_walk(char walk_area[][AREA_SIZE]){

    

}
void print_area(char walk_area[][AREA_SIZE]){
    for (int i = 0; i < AREA_SIZE; i++){
        for (int j = 0; j < AREA_SIZE; j++){
            printf("%2c", walk_area[i][j]);
        }
        printf("\n");
    }
}


int main(){
    char walk_area[AREA_SIZE][AREA_SIZE];

    printf("before walk\n");

    //create and print walk area
    create_walk_area(walk_area);
    print_area(walk_area);



    return 0;
}