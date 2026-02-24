// program calculates income tax 

#include<stdio.h>
#define PERCENT (1/100)
int main()
{

    float income , tax , additional_amount,excess;

    printf("Enter you taxable income: ");
    scanf("%f",&income);

    if (income < 750.0)
    {
        tax = (1*PERCENT)*income;
    }
    else if (income >= 750.0 && income < 2250.0)
    {
        excess = income - 750.0;
        additional_amount = (2*PERCENT)*(excess);
        tax = 7.50 + additional_amount;
    }
    else if (income >= 2250.0 && income < 3750.0)
    {
        excess = income - 2250.0;
        additional_amount = (3*PERCENT)*(excess);
        tax = 37.50 + additional_amount;
    }

    // program will be completed later due to its simplicity



    return 0;
}