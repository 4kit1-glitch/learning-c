// program calculates the interest of a 100$ over a given period and over a given interest rate
// from c programming a mordern approach

#include<stdio.h>
#define RATES_NUM ((sizeof(value)) / (sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main()
{
    int num_years,rate;
    double value[5];

    printf("enter the rate: ");
    scanf("%d",&rate);
    printf("enter the number of years: ");
    scanf("%d",&num_years);

    printf("years");

    for(int i = 0; i< RATES_NUM ; i++)
    {
        printf("%6d%%",(rate + i));

        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (int years = 1; years < num_years; years++)
    {
        printf("%3d   ",years);
        for(int i = 0; i < RATES_NUM; i++)
        {
            value[i] += value[i] * (rate + i) / 100.0;
            printf("%7.2f$",value[i]);
        }
        printf("\n");
    }
    



}
