// a simple calculator

#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter the operation you want to carry out operators(+,-,*,/)\n:");
    scanf(" %f %c %f", &num1, &operator, &num2);

    if (operator == '+') {
        printf("result = %.2f", num1 + num2);
    } else if (operator == '-') {
        printf("result = %.2f", num1 - num2);
    } else if (operator == '*') {
        printf("result = %.2f", num1 * num2);
    } else if (operator == '/'){
        if (num2 == 0) {
            printf("division by zero");
            return -1;
        }
        printf("result = %.3f", num1 / num2);

    } else {
        printf("invalid operation");
    }

    return 0;
}