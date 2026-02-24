//program to calculate taxed amount
#include<stdio.h>
#define TAX (5.0/100.0)
int main(void)
{
    float amount, taxed_amount;

    printf("enter your amount of money: ");
    scanf("%f",&amount);

    taxed_amount = amount + (TAX * amount);

    printf("Original amount: $%.2f\n",amount);
    printf("Taxed amount : $%.2f\n",taxed_amount);

    return 0;
}