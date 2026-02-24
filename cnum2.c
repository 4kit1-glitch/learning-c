// new method of cnum.c

#include<stdio.h>
int main()
{
    int num;

    printf("enter the number: ");
    scanf("%d", &num);

    if(num /100 >= 1)
    {
        printf("number has 3 digits");
    }
    else if (num / 100 < 1 && num / 10 >= 1)
    {
        printf(" number has two digits");
    }
    // will work continuation will be done later

    return 0;
}