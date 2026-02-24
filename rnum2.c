#include<stdio.h>

int main(void)
{
    int digit1,digit2,digit3;

    printf("enter the three numbers: ");
    scanf("%1d%1d%1d",&digit1,&digit2,&digit3); // reads only one character and leaves the rest for the next call


    printf("reversed is %d%d%d\n",digit3,digit2,digit1);






    return 0;
}