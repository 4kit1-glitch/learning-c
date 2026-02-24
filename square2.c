/*
program prints the square of a range of numbers 
program to be manipulated to estimate the number of bits used to store intergers on your machine
*/

#include<stdio.h>

int main()
{

    int i , count;
    int n;
    char ch , ch2 = 'A';

    printf("\n%c\n",ch2);

    printf("enter a number: ");
    scanf("%d", &n);

    ch = getchar();
    for(i = 1, count = 1 ; i<=n ; i++ , count++)
    {
        printf("%10d%10d\n", i, i*i);

        if(count == 24)
        {  
            printf("\nPress Enter to Continue...");
            count = 0;
            getchar();
            
        } 

    }

    return 0;
}