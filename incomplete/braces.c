// this program implementents some operations on the stack

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int top = 0;
char contents[STACK_SIZE];

//operations prototypes
void front_end();
void stack_overflow();
void stack_underflow();
void wrong_order();
void push(char value);
char pop();
bool is_empty();
bool is_full();

int main() {
    front_end();
    return 0;
}

void front_end() {
    char input;

    printf("Enter the parenthensis - () or {} only: ");
    scanf("%c", &input);

    while (1) {
        if (input == '\n') {
            break;
        }
        if (input == '{' || input == '(') {
            push(input);
        } else if (input == '}') {
            switch (pop()) {
                case '(': wrong_order(); break;
                default: break;
            }
        } else if (input == ')') {
            switch (pop()) {
                case '{': wrong_order(); break;
                default: break;
            }
        }
        scanf("%c", &input);
    }
    printf("Correct order!!!\n");
    return;
}


bool is_empty() {
  return top == 0;
}
bool is_full() {
    return top == STACK_SIZE;
}
void push(char value) {
    if (is_full()) {
        stack_overflow();
    }
    contents[top++] = value;
}
char pop() {
    if (is_empty()) {
        stack_underflow();
    }
    return contents[--top];
}

//error checks
void wrong_order() {
    printf("wrong order\n");
    exit(EXIT_SUCCESS);
}
void stack_overflow() {
    printf("stack is full");
    exit(EXIT_FAILURE);
}
void stack_underflow() {
    printf("No element in stack");
    exit(EXIT_FAILURE);
}