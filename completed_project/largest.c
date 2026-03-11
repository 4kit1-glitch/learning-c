//program find the largest imputted number

#include<stdio.h>

int main()
{


    float num, max=0.0;

    do
    {
        printf("enter a number: ");
        scanf("%f", &num);

        if(num > max)
        {
            max = num;
        }
        else
        {
            continue;
        }


    }
    while(num > 0);

    printf("the largest number entered was %2f",max);



    return 0;
}