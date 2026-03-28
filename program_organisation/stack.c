// this program implementents some operations on the stack

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int top = 0;
int contents[STACK_SIZE];

//operations prototypes
void stack_status();
void print_stack();
void add_element();
void front_end();
void make_empty();
bool is_empty();
bool is_full();
int push(int value);
int pop();

int main() {
    front_end();
    return 0;
}

void front_end() {
    int response;

    printf("\t\tWelcome\n\n");

    while (1) {
        printf("\n============================\n");
        printf("1. Empty stack\n");
        printf("2. Check stack status\n");
        printf("3. See stack elements\n");
        printf("4. Push\n");
        printf("5. Pop\n");
        printf("6. Exit\n");
        printf("=============================\n\n");
        
        printf("Select an option: ");
        scanf(" %d", &response);

        switch (response) {
            case 1: make_empty(); break;
            case 2: stack_status(); break;
            case 3: print_stack(); break;
            case 4: add_element(); break;
            case 5: pop(); break;
            case 6: exit(EXIT_SUCCESS); break;
            default: printf("invalid operation!!!"); break;
        }
    }
}

//mask function groups
void print_stack() {
    putchar('[');
    for (int i = 0; i < top; i++) {
        printf("%d, ", contents[i]);
    }
    putchar(']');
}
void stack_status() {
    if (is_empty()) {
        printf("no element in stack!!!\n");
    } else if (is_full()) {
        printf("stack completely full!!!\n");
    } else {
        printf("There are elements in the stack but stack not full.\n\n");
    }
}
void add_element() {
    int element;

    printf("enter the element you want to add: ");
    scanf(" %d", &element);

    push(element);
}

//stack operations
void make_empty() {
    top = 0;
    printf("\nEmptied the stack\n");
}
bool is_empty() {
  return top == STACK_SIZE;
}
bool is_full() {
    return top == STACK_SIZE;
}
int push(int value) {
    if (is_full()) {
        return -1;
    }
    contents[top++] = value;
}
int pop() {
    if (is_empty()) {
        return -1;
    }
    return contents[--top];
}
