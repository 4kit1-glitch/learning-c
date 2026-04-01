// this program implementents some operations on the stack

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int top = 0;
char contents[STACK_SIZE];

//operations prototypes
void front_end();
void stack_status();
void print_stack();
void add_element();
void make_empty();
bool is_empty();
bool is_full();
int push(int value);
int pop();

void stack_overflow();
void stack_underflow();

int main() {
    front_end();
    return 0;
}

void front_end() {
    char parenthensis;

    printf("Enter the parenthensis() or {} only: ");
    parenthensis = getchar();

    while (parenthensis != '\n') {
        push(parenthensis);
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

//stack operations
void make_empty() {
    top = 0;
    printf("\nEmptied the stack\n");
}
bool is_empty() {
  return top == 0;
}
bool is_full() {
    return top == STACK_SIZE;
}
int push(int value) {
    if (is_full()) {

    }
    contents[top++] = value;
}
int pop() {
    if (is_empty()) {
        return -1;
    }
    return contents[--top];
}
