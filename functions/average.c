// computes the average of two numbers

#include<stdio.h>

double average(double x , double y)
{
    return (x + y) / 2;
}

int main()
{
    double avg;
    
    avg = average(10, 13);

    printf("%lf", avg);

    return 0;
}