// Date 12/02/26
// calculating a brockers commision

#include<stdio.h>

int main(void)
{

    float cost , commission;
    do
    {

    printf("enter the cost of the stock: ");
    scanf("%f",&cost);

    if(cost < 2500.0)
    {
        commission = 30.0 + (1.7/100);
    }
    else if(cost >= 2500.0 && cost < 6250.0 )
    {
        commission = 56 + (0.66/100);
    }
    else if(cost >= 6250.0 && cost < 20000.0 )
    {
        commission = 76 + (0.34/100)*cost;
    }
    else if(cost >= 20000.0 && cost < 50000.0 )
    {
        commission = 100.0 + (0.22/100)*cost;
    }
    else if(cost >= 50000.0 && cost < 500000.0 )
    {
        commission = 155.0 + (0.11/100)*cost;
    }
    else
    {
        commission = 255.0 + (0.09/100)*cost;
    }

    if (commission < 39.0)
    {
        commission = 39.0;
    }
    if(cost == 0)
    {
        break;
    }

    printf("commission: $%.2f\n",commission);
    }
    while(cost != 0);
    
    return 0;
}
