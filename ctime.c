// program converts time from the 24 hr format to the 12 hr format

#include<stdio.h>

int main()
{
    int hours , minutes;

    printf("Enter a 24 - hour time(hh:mm): ");
    scanf("%d:%d", &hours , &minutes);

    switch (hours)
    {
    case 1: printf("Equivalent time in 12 - hour time: 1:%d",minutes); break;
    case 2: printf("Equivalent time in 12 - hour time: 2:%d",minutes); break;
    case 3: printf("Equivalent time in 12 - hour time: 3:%d",minutes); break;
    case 4: printf("Equivalent time in 12 - hour time: 4:%d",minutes); break;
    case 5: printf("Equivalent time in 12 - hour time: 5:%d",minutes); break;
    case 6: printf("Equivalent time in 12 - hour time: 6:%d",minutes); break;
    case 7: printf("Equivalent time in 12 - hour time: 7:%d",minutes); break;
    case 8: printf("Equivalent time in 12 - hour time: 8:%d",minutes); break;
    case 9: printf("Equivalent time in 12 - hour time: 9:%d",minutes); break;
    case 10: printf("Equivalent time in 12 - hour time: 10:%d",minutes); break;
    case 11: printf("Equivalent time in 12 - hour time: 11:%d",minutes); break;
    case 12: printf("Equivalent time in 12 - hour time: 12:%d",minutes); break;
    case 13: printf("Equivalent time in 12 - hour time: 1:%d",minutes); break;
    case 14: printf("Equivalent time in 12 - hour time: 2:%d",minutes); break;
    case 15: printf("Equivalent time in 12 - hour time: 3:%d",minutes); break;
    case 16: printf("Equivalent time in 12 - hour time: 4:%d",minutes); break;
    case 17: printf("Equivalent time in 12 - hour time: 5:%d",minutes); break;
    case 18: printf("Equivalent time in 12 - hour time: 6:%d",minutes); break;
    case 19: printf("Equivalent time in 12 - hour time: 7:%d",minutes); break;
    case 20: printf("Equivalent time in 12 - hour time: 8:%d",minutes); break;
    case 21: printf("Equivalent time in 12 - hour time: 9:%d",minutes); break;
    case 22: printf("Equivalent time in 12 - hour time: 10:%d",minutes); break;
    case 23: printf("Equivalent time in 12 - hour time: 11:%d",minutes); break;
    case 0: printf("Equivalent time in 12 - hour time: 12:%d",minutes); break;
    
    default: printf("not a possible time"); break;
    }

    if(hours > 12)
    {
        printf("PM\n");
    }
    else if(hours == 24)
    {
        printf("AM\n");
    }




    return 0;
}