// computes the greatest common divisor
//not compleated totally wrong

#include<stdio.h>

int main()
{

    int m,n,rem;

    printf("enter the two numbers(a,b): ");
    scanf("%d,%d", &m,&n);

    while(n>=0)
    {
        if(n == 0)
        {
            break;
        }
        else
        {
            rem = n / m;
            m = n;
            n = rem;
        }
        printf("in loop");

    }

    printf("GDC = %d\n", m);




    return 0;
}