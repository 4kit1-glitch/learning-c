// program test which date is earlier

#include<stdio.h>

int main()
{   
    int day1,day2,month1,month2,year1,year2;

    printf("enter the first date :");
    scanf("%d/%d/%d",&day1,&month1,&year1);

    printf("enter the second date: ");
    scanf("%d/%d/%d",&day2,&month2,&year2);

    if(year1 < year2 || day1 < day2 || month1 < month2)
    {
        printf("%d/%d/%d is the earlier date\n",day2,month2,year2);
    }
    else
    {
        printf("%d/%d/%d is the earlier date\n",day1,month1,year1);
    }


    return 0;
}