// wind speed description with the beauford scale

#include<stdio.h>
int main()
{
    int wind_speed; 

    printf("enter the wind speed (knots): ");
    scanf("%d", wind_speed);

    if(wind_speed < 1)
    {
        printf("calm");
    }
    else if(wind_speed < 3)
    {
        printf("Light air");
    }
    else if(wind_speed >= 4 && wind_speed <=47 )
    {
        printf("Gale");
    }
    else if(wind_speed >= 48 && wind_speed <= 63)
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }

    return 0;
}