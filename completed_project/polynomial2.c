#include<stdio.h>
int main(void)
{
    int x;
    float polynomial;

    printf("enter a value for x ");
    scanf("%d", &x);

    polynomial = ((3*x)*(x-5)*(x+7)*(x-6)); // Horner's rule

    printf("the value of the f(%d) is %.2f", x,polynomial);



    return 0;
}