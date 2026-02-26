// This program computes square root using the newtons method

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define TWO 2

int main()
{

    double num, approx1 = 1.0 ,approx2 ,average , sqrt , div , difference = 0;
    bool exit_cnd;

    
    printf("enter a num: ");
    scanf("%lf", &num);

    do
    {                   
        approx2 = approx1;                              /*many things happen here */
        div = num / approx1;
        average = (div + approx1) / TWO;
        approx1 = average;
        difference = approx2 - approx1;
        

        exit_cnd = (fabs(difference) < (0.0001 * approx2));

        if(exit_cnd == true)
        {
            sqrt = approx1;
            break;
        }

    }
    while(1);

    printf("square root = %lf\n",sqrt);
    


    return 0;
}