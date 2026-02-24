//date :10/02/26
// Compute the checker value and checkes if the barcode is valid

#include<stdio.h>
#define TEN 10
#define NINE 9

int main(void)
{
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
    int first_sum, second_sum , remainder,checker;

    printf("enter the first digit: ");
    scanf("%d",&i1);

    printf("enter the next five numbers (separate by a comma): ");
    scanf("%d,%d,%d,%d,%d",&i2,&i3,&i4,&i5,&i6);

    printf("enter the last five digits (separate with a comma): ");
    scanf("%d,%d,%d,%d,%d",&i7,&i8,&i9,&i10,&i11);

    printf("enter the check digit");
    scanf("%d",i12);

    first_sum = (i1+i3+i5+i7+i9+i11);
    second_sum = (i2 + i4 + i6 + i8 + i10);

    remainder = (((first_sum *3) + (second_sum)) - 1 ) % TEN;

    checker = NINE - remainder;
// checks validity
    if (i12 == checker)
    {
        printf("VALID CODE ");
    }
    else
    {
        printf("invalid code");
    }


    return 0;
}