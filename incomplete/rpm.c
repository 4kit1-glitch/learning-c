// reverse polish notation

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 10

int top = 0;
float operands[STACK_SIZE];

// stack operations
bool is_empty();
bool is_full();
void push(float value);
float pop();

// general operations
void read_input();
void calculate();
void print_results();

// math operations
float plus(float x, float y);
float minus(float x, float y);
float quotient(float x, float y);
float product(float x, float y);

// error handling
void stack_overflow();
void stack_underflow();
bool is_operand(char );
bool is_operator(char );

int main() {
    read_input();
    calculate();
    print_results();
    return 0;
}

void read_input() {
    char ch;
    int operand;
    int num1, num2;
    printf("Enter the operation in reverse polish notation\n: ");
    scanf(" %c", &ch);

    while (1) {
        if (is_operand(ch)) {
            if (ch >= '0' && ch <= '9') {
                operand = ch - '0';
                push(operand);
            } else {
                stack_overflow();
            }
        } else if (is_operator(ch)) {
            
        } else {
            stack_overflow();
        }
    }

    

}

bool is_operand(char ch) {
    if (isdigit(ch)) {
        return true;
    }
    return false;
}
bool is_operator(char ch) {
    bool cnd =
        ch == '+' ||
        ch == '-' ||
        ch == '*' ||
        ch == '/' ||
        ch == '=';

    if (cnd) {
        return true;
    }
    return false;
}