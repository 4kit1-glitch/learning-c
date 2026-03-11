// Author: kit
// purpose: to reverse a number
// date:02/10/26

#include<stdio.h>
#define TEN 10
#define HUNDRED 100

int main(void)
{
    int number,first_digit, second_digit , last_digit, remainder;

    printf("enter a three digit number:");
    scanf("%d",&number);

    first_digit = number / HUNDRED;
    remainder = number % HUNDRED;

    second_digit = remainder / TEN;
    last_digit = remainder % TEN;

    printf("REVERSED: %d%d%d\n",last_digit,second_digit,first_digit);



    return 0;
}