#include<stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

int main(void)
{
    int amount,twenties,tens,fives,ones,remainder;

    printf("enter your amount: ");
    scanf("%d",&amount);

    twenties = amount / TWENTY;
    remainder = amount - (twenties * TWENTY);

    tens = remainder / TEN;
    remainder = remainder - (tens * TEN);

    fives = remainder / FIVE;
    remainder =remainder - (fives * FIVE);
    
    ones = remainder / ONE;
    remainder = remainder - (ones * ONE);

    printf("$20 bills = %d\n",twenties);
    printf("$10 bills = %d\n",tens);
    printf("$5 bills = %d\n$1 bills = %d\n",fives, ones);





    return 0;
}