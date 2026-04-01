// reverse polish notation

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 10

int top = 0;
float operands[STACK_SIZE];

// stack operations
bool is_empty();
bool is_full();
void push(float value);
float pop();

// general operations
bool is_operand();
bool is_operator();
void read_input();
void print_results();

// math operations
float plus(float x, float y);
float minus(float x, float y);
float quotient(float x, float y);
float product(float x, float y);

// error handling
void stack_overflow();
void stack_underflow();

int main() {
    read_input();
    print_results();
    return 0;
}