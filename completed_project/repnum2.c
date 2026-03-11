/*
*   Date 26/02/26
*  Program checks for repeating digits and prints them if any
*/

#include<stdio.h>
#include<stdbool.h>
#define TEN 10
#define ZERO 0

int main()
{
    bool digit_seen[10] ={false};
    int rep_digits[10] = {0};
    int num;
    int digit;
    
    printf("Enter a number");
    scanf("%d",&num);

    printf("Repeated num: ");

    while (num > 0){ 
        digit = num % TEN;

        if(digit_seen[digit]){
            rep_digits[digit] = digit;
            num /= TEN;
        }
        else{
            digit_seen[digit] = true;
            num /= TEN;
        }

    }
    for(int i=0; i< 10;i++){
        if(rep_digits[i] != 0){
            printf("%d ",rep_digits[i]);
        }
    }
    printf("\n");

    return 0;
}