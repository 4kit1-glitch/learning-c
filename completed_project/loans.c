#include<stdio.h>
#define MONTHS 12

int main(void)
{

    float amount, monthly_payment ,balance , interest_rate , monthly_interest_rate;

    printf("enter the amount of loan: ");
    scanf("%f", &amount);
    printf("enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("enter monthly pay: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = (interest_rate /100) / MONTHS;

    balance = (amount - monthly_payment) + (amount* monthly_interest_rate);

    printf("Balance afer first payment: %.2f\n", balance);


    balance = (balance - monthly_payment) + (balance* monthly_interest_rate);

    printf("Balance after second payment: %.2f\n",balance);

    balance = (balance - monthly_payment) + (balance* monthly_interest_rate);

    printf("Balance after third payment: %.2f\n",balance);


    return 0;
}