// modifying tflight so it takes time in the 12 hr format

#include<stdio.h>

int main()
{
    int hours , minutes;
    char indicator1 , indicator2;

    printf("enter the time in 12 hr format");
    scanf("%d:%d %1c %1c" , &hours ,&minutes , &indicator1 , &indicator2);  // this is the main problem from here everything is just documentation

    return 0;
}