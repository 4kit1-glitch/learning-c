//Program converts time in 12hr to 24 hr

#include<stdio.h>
int main()
{
    int hour , minute;
    char period;

    printf("enter the time in 12 hr format");
    scanf("%d:%d %1c" , &hour ,&minute , &period);


    printf("the time in 24 hr is: ");
    if(period == 'a' || period == 'A')
    {
        switch (hour)
        {
            case 1: printf("%d:%d",hour , minute);break;
            case 2: printf("%d:%d",hour , minute);break;
            case 3: printf("%d:%d",hour , minute);break;
            case 4: printf("%d:%d",hour , minute);break;
            case 5: printf("%d:%d",hour , minute);break;
            case 6: printf("%d:%d",hour , minute);break;
            case 7: printf("%d:%d",hour , minute);break;
            case 8: printf("%d:%d",hour , minute);break;
            case 9: printf("%d:%d",hour , minute);break;
            case 10: printf("%d:%d",hour , minute);break;
            case 11: printf("%d:%d",hour , minute);break;
            case 12: printf("0:%d", minute);break;
            default:break;
        }
    }

    else if(period == 'p' || period == 'P')
    {
        switch (hour)
        {
            case 1: printf("13:%d",hour , minute);break;
            case 2: printf("14:%d",hour , minute);break;
            case 3: printf("15:%d",hour , minute);break;
            case 4: printf("16:%d",hour , minute);break;
            case 5: printf("17:%d",hour , minute);break;
            case 6: printf("18:%d",hour , minute);break;
            case 7: printf("19:%d",hour , minute);break;
            case 8: printf("20:%d",hour , minute);break;
            case 9: printf("21:%d",hour , minute);break;
            case 10: printf("22:%d",hour , minute);break;
            case 11: printf("23:%d",hour , minute);break;
            case 12: printf("0:%d", minute);break;
            default:break;
        }  
    }





    return 0;
}