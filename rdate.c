// reverse dates
#include<stdio.h>
int main(void)
{   
    int month,day,year;

    printf("enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("new format (yyyy/mm/dd) = %.2d/%.2d/%.4d\n",year,month,day);

    return 0;
}