/*
program translates an alphanumeric phone number into a numeric
its not a standard for analog devices so dont think it will work
*/


#include<stdio.h>

int main()
{
    int telephone_num;
    char ch;

    printf("enter phone number: ");

    ch = getchar();

    while(ch != '\n')
    {

        if ('A' <= ch && ch <= 'C')
        {
            printf("2");
        }
        else if ('D' <= ch && ch <= 'F')
        {
            printf("3");
        }
        else if ('G' <= ch && ch <= 'I')
        {
            printf("4");
        }
        else if ('M' <= ch && ch <= 'O')
        {
            printf("6");
        }
        else if ('P' <= ch && ch <= 'S')
        {
            printf("7");
        }
        else if ('T' <= ch && ch <= 'V')
        {
            printf("8");
        }
        else if ('J' <= ch && ch <= 'L')
        {
            printf("5");
        }
        else if ('W' <= ch && ch <= 'Y')
        {
            printf("9");
        }
        else
        {
            putchar(ch);
        }

        
        ch = getchar();
        
    }

    return 0;
}