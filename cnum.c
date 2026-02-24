// program to calculate the number of digits in a number

#include<stdio.h>

int main()
{
    int number;

    printf("enter a number: ");
    scanf("%d" ,&number);

    if (number > 0 && number <= 9)
    {
        printf("number has 1 digit\n");
    }
    else if (number > 9 && number <= 99)
    {
        printf("number has 2 digits\n");
    }
    else if (number > 99 && number <= 999 )
    {
        printf("number has 3 digits\n");
    }
    


    return 0;
}