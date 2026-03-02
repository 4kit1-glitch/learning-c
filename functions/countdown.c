// runs a countdown

#include<stdio.h>

void countdown(int n)
{
    printf("T - %d and counting\n", n);
}

int main()
{
    int num = 10;

    for(int i = num; i > 0; i--){
        countdown(i);
    }


    return 0;
}