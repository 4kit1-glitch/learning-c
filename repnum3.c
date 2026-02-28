/*
*   Date 26/02/26
*  Program checks for repeating digits and prints them if any in a table form
*/

#include<stdio.h>
#include<stdbool.h>
#define TEN 10
#define ZERO 0

int main()
{
    bool digit_seen[10] ={false};
    int digits[10]={0,1,2,3,4,5,6,7,8,9};
    int digit_frequency[10] = {0};
    int num, digit;
    bool cnd;
    
    do{

        printf("Enter a number");
        scanf("%d", &num);
        
        cnd = num > 0;

        while (num > 0){ 
            digit = num % TEN;

            if(digit_seen[digit]){
                digit_frequency[digit] += 1;
                num /= TEN;
            }
            else{
            digit_frequency[digit] += 1;
            num /= TEN;
            }

        }
        printf("digits:   ");
        for(int i=0; i< 10; i++){
            printf("%2d ", digits[i]);
        }
        printf("\n");
        printf("freuency: ");

        for(int i=0; i< 10; i++){
            printf("%2d ", digit_frequency[i]);
            digit_frequency[i] = 0;
        }
        printf("\n");

    }
    while (cnd == true);

    return 0;
}