// this code illustrates the use of the exit function

#include<stdio.h>
#include<stdlib.h>

int country(char num);

int main()
{
    char num;
    printf("enter a number");
    scanf("%1c", &num);
    
    country(num);
    printf("alexa bby\n");


}

int country(char num)
{
    if((int)num > 0 ){
        printf("hello\n");
        // exit(EXIT_SUCCESS);
        return 0;
    }
    else{
        // exit(EXIT_FAILURE);
        return 9;
    }
}