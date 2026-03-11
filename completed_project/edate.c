// program prints the earliest date

// wrong conditions to continue

#include<stdio.h>

int main()
{

    int day , month, year , earlier_day,earlier_month,earlier_year;


    printf("enter a date(dd/mm/yy): ");
        scanf("%d/%d/%d",&day , &month , &year);

        earlier_day = day;
        earlier_month = month;
        earlier_year = year;

    for(;;)
    {
        printf("enter a date(dd/mm/yy): ");
        scanf("%d/%d/%d",&day , &month , &year);

        if(day == 0 && month == 0 && year == 0)
        {
            break;
        }
        else if((day < earlier_day || month < earlier_month) && year == earlier_year)
        {
            earlier_day = day;
            earlier_month = month;
            earlier_year = year;

        }

    }

    printf("the earlier date is: %d/%d/%.2d\n" ,earlier_day,earlier_month,earlier_year );
    return 0;
}