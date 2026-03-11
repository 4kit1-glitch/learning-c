//program shows users the closest departure time and arival time of the flight

#include<stdio.h>
#define SIXTY 60

int main()
{   
    int hours , mins , total_time;

    printf("Enter a 24 hr time: ");
    scanf("%d:%d",&hours,&mins);

    total_time = (hours * SIXTY) + mins ; //calculates total time in minutes

    if (total_time < 510 )
    {
        printf("Closest depature time 8:00 am , arrival time 10:16 am\n");

    }
    else if (total_time >= 510 && total_time < 590 )
    {
        printf("Closest depature time 9:43 am , arrival time 11:52 1m\n");

    }
    else if (total_time >= 590 && total_time < 719 )
    {
        printf("Closest depature time 11:19 am , arrival time 1:31 pm\n");
    }
    else if (total_time >= 719 && total_time < 810)
    {
        printf("Closest depature time 12:47 pm , arrival time 3:00 pm\n");
    }
    else if (total_time >= 810 && total_time < 899)
    {
        printf("Closest depature time 2:00 pm , arrival time 4:06 pm\n");
    }
    else if (total_time >= 899 && total_time < 1050)
    {
        printf("Closest depature time 3:45 am , arrival time 5:55 pm\n");
    }
    else if (total_time >= 1050 && total_time < 1230)
    {
        printf("Closest depature time 7:00 pm , arrival time 9:20 pm\n");
    }
    else if (total_time >= 1230)
    {
        printf("Closest depature time 9:45 am , arrival time 11:58 pm\n");
    }
    else
    {
        printf("UNAVAILABLE\n");
    }



    return 0;
}