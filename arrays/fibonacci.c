// code prints numbers in the fibonacci series

#include<stdio.h>

#define N 10

int main()
{
    int fib_num[N] = {0 , 1};

    printf("the numbers are: ");

    for(int i = 2 ; i < N ; i++ )
    {
        fib_num[i] = fib_num[i-2] + fib_num[i-1];
    }
    for(int i = 0; i < N; i++)
    {
        printf("%d,",fib_num[i]);
    }

    printf("\n");

    return 0;
}