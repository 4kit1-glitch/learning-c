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
    int response, idx, value;

    do {
        printf("\n============================\n");
        printf("1. insert\n");
        printf("2. delete\n");
        printf("3. update\n");
        printf("4. print elements\n");
        printf("5. exit\n");
        printf("============================\n");

        printf("select an option\n: ");
        scanf("%d", &response);

        switch (response) {
            case 1: 
                printf("enter the index to insert into: ");
                scanf("%d", &idx);

                printf("Enter the value to add: ");
                scanf("%d", &value);

                insertion(value, idx);
            break;

            case 2:
                printf("enter the index of the element you wanna remove: ");
                scanf("%d", &idx);

                deletion(idx);
            break;

            case 3:
                printf("enter the index you wanna update");
                scanf("%d", &idx);

                printf("enter the value to update with: ");
                scanf("%d", &value);

                update(value, idx);
            break;

            case 4:
                printf("the elements: ");
                traverse();
            break;

            case 5: exit(EXIT_SUCCESS); break;

            default: printf("invalid option\n\n"); break;
        }

    }
    while(true);
    
}


void insertion(int value, int idx) {
    if (is_full() || idx >= ARR_SIZE) {
        overflow_err();
    }

    position = ARR_SIZE;
    size++;
    
    while (position >= idx) {
        position--;
        contents[position + 1] = contents[position];
    }
    contents[idx] = value;
}
void deletion(int idx) {

}
void update(int value, int idx) {

}
void traverse() {
    putchar('[');
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d, ", contents[i]);
    }
    putchar(']');
}


bool is_full() {
    return size == ARR_SIZE;
}

void overflow_err() {
    printf("Array is full!!\n");
    exit(EXIT_FAILURE);
}

