// test if a number is prime

#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n)
{
    int divisor;
    if(n <= 1){
        return false;
    }
    for(divisor = 2; divisor * divisor < n; divisor++){
        if(n % divisor == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 14;

    if(is_prime(num)){
        printf("number is prime\n");
    }
    else{
        printf("number is not prime\n");
    }

    return 0;
}