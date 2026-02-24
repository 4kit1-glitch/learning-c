// Date 10/02/2026
// ISBN code separator


#include<stdio.h>
int main(void)
{
    int gsi_prifix ,group_identifier , publisher_code , item_number , check_digit;

    printf("Enter the ISBN code: ");
    scanf("%d-%d-%d-%d-%d",&gsi_prifix,&group_identifier ,&publisher_code , &item_number ,&check_digit);

    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher Code: %d\nItem number: %d\nCheck digit : %d\n",gsi_prifix,group_identifier,publisher_code,item_number,check_digit);

    return 0;
}
