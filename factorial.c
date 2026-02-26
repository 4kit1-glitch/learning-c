/*
*   Program calculates factorial
*   short int can take a max number of 7 about 750
*   int < 13 about 479001600
*   long in <21 abt 24e17
*   long long
*   float is wierd it seems to approximately handle all the values
*
*/


#include<stdio.h>

int main()
{
    int num;
    float factorial;

    printf("enter number: ");
    scanf("%d", &num);

    factorial = num;

    for(int i = 1; i <= num; i++)
    {
        
        if((num - i) == 0)
        {
            continue;
        }

        factorial = factorial *(num - i);
    }

    printf("factorial is %f\n", factorial);

    return 0;
}