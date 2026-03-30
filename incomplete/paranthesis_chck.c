// this program prompts the user to enter a series of parenthensis
// and checks if they are properly ordered

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 50


int top = 0;
char contents[STACK_SIZE];

// stack operations
void pop();
void push(char value);
void stack_overflow();
void stack_underflow();
bool is_empty();
bool is_full();

int main() {
    char parenthensis;
    printf("Enter a series of parenthensis or braces: ");
    parenthensis = getchar();

    while (parenthensis != '\n'){
        if (is_empty && parenthensis == '}') {
            stack_underflow();
        } else if (is_empty && parenthensis == ')') {
            stack_underflow();
        } else if (is_full) {
            stack_overflow();
        }
        push(parenthensis);

    }
    
}