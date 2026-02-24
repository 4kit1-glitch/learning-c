// Date 10/02/2026
// Time 23:32
// program converts a 5 digit number to octal

#include<stdio.h>
#define EIGHT 8

int main(void)
{   

    int d1,d2,d3,d4,d5, remainder , number;

    printf("enter a number between  0 and 32767: ");
    scanf("%d", &number);

    d5 = number % EIGHT;
    remainder = number / EIGHT;

    d4 = remainder % EIGHT;
    remainder = remainder / EIGHT;

    d3 = remainder % EIGHT;
    remainder = remainder / EIGHT;

    d2 = remainder % EIGHT;
    remainder = remainder / EIGHT;

    d1 = remainder % EIGHT;
    remainder = remainder / EIGHT;

    printf("in octal , your number is %.1d%.1d%.1d%.1d%.1d\n",d1,d2,d3,d4,d5);




    return 0;
}