// print product details
#include<stdio.h>
int main(void)
{
    int item_num ,day , month , year;
    float price;

    printf("enter the item number: ");
    scanf("%d",&item_num);
    
    printf("enter the unit price: ");
    scanf("%f",&price);

    printf("enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("\nItem\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t%4.2f\t%.2d/%.2d/%.4d\n",item_num,price,month,day,year);

    return 0;
}