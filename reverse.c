//prints the reverse of a number


#include<stdio.h>
#define TEN 10

int main(void)
{
    int number ,result = 0, remainder = 0;

    printf("enter an interger number: ");
    scanf("%d",&number);

    printf("reverse is ");

    result = number;
    do
    {  
        remainder = result % TEN;
        result = result / TEN;
        
        printf("%d\n",remainder);
    }
    while(result > 0);


    return 0;
}