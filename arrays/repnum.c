/*
*   Date 26/02/26
*  Program checks for repeating digits
*/

#include<stdio.h>
#include<stdbool.h>
#define TEN 10
#define ZERO 0

int main()
{
    bool digit_seen[10] ={false};
    long num;
    int digit;
    
    printf("Enter a number");
    scanf("%d",&num);

    while (num > 0)
    {
        digit = num % TEN;

        if(digit_seen[digit])
        {
            break;
        }
        digit_seen[digit] = true;
        num /= TEN;

    
    }
    if(num > 0)
    {
        printf("contains repeating digits\n");
    }
    else
    {
        printf("no repeating digit\n");
    }
    






    return 0;
}