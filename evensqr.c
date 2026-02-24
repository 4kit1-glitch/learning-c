// program prints all even squares in a range if numbers

#include<stdio.h>
#define TWO 2
int main()
{
    int range , i;
    printf("enter the range: ");
    scanf("%d",&range);

    for(i = 1 ; i*i <= range ; i++) // conditions are useful
    {
        if(i % TWO != 0)
        {
            continue;
        }
        else
        {
            printf("%d\n",i*i);
        }
    }



    return 0;
}