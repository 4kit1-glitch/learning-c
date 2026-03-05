// computes the pow function using recursion

#include<stdio.h>
#include<stdlib.h>

int power(int, int);

int main()
{
    int num, exp, result;

    printf("enter the number and the exponent(num^exponent): ");
    scanf(" %d^%d", &num, &exp);

    result = power(num, exp);

    printf("%d\n", result);


    exit(EXIT_SUCCESS);
}

int power(int x, int n)
{
    if(n == 0){
        return 1;
    }
    else{
        return x * power(x, n - 1);
    }
}
