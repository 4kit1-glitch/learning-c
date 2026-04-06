// implementation of an array ADT of size 9

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARR_SIZE 9

int contents[ARR_SIZE] = {0};
int size = 0, position;


//data structure operations
void insertion(int value, int idx);
void deletion(int idx);
void update(int value, int idx);
void traverse();

// error handling
bool is_full();
void overflow_err();
void underflow_err();

//interface
void front_end();

int main() {
    front_end();
    return 0;
}

void front_end() {
    int response;

    printf("welcome\n============================\n");
    printf("1. insert\n");
    printf("2. delete\n");
    printf("4. update\n");
    printf("3. print elements\n");
    printf("5. exit\n");
    printf("============================\n");

    printf("select an option\n: ");
    scanf("%d", &response);

    switch (response) {
    case 1: 
        int idx, value;

        printf("enter the index to insert into: ");
        scanf("%d", &idx);

        printf("Enter the value to add: ");
        scanf("%d", &value);

        insertion(value, idx);
    break;
    
    default:
        break;
    }
}


void insertion(int value, int idx) {
    if (is_full() || idx >= ARR_SIZE) {
        overflow_err();
    }

    position = ARR_SIZE;
    size += 1;
    
    while (position >= idx) {
        position--;
        contents[position + 1] = contents[position];
    }
    contents[idx] = value;
}

bool is_full() {
    return size == ARR_SIZE;
}

void overflow_err() {
    printf("Array is full!!\n");
    exit(EXIT_FAILURE);
}

