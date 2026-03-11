// program takes a two digit number and prints out the english word for it 

#include<stdio.h>
#define TEN 10

int main()
{   int number, tens , units;
    
    printf("enter a two digit number: ");
    scanf("%d",&number);
    
   //splits the numbers

    tens = number / TEN;
    units = number % TEN;

    if (tens > 0 && (number < 11 || number > 19))
    {
        switch (tens) //handles case:num <11Unum >19
        {
            case 1: printf("ten"); break;
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
    
            default: printf("not a 3 digit number"); break;
        }
        switch (units)
        {
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;

            default: break;
        }

        printf("\n");
    }
    else if(tens == 0)//deals with single digits
    {
        switch (units)
        {
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;

            default: break;
        }

        printf("\n");
    }
    else if(number >= 11 && number <= 19)
    {
        switch (units)
        {
            case 1: printf("-eleven"); break;
            case 2: printf("-twelve"); break;
            case 3: printf("-thirteen"); break;
            case 4: printf("-fourteen"); break;
            case 5: printf("-fifteen"); break;
            case 6: printf("-sixteen"); break;
            case 7: printf("-seventeen"); break;
            case 8: printf("-eighteen"); break;
            case 9: printf("-nineteen"); break;

            default: break;
        }

        printf("\n");
    }
    else
    {
        printf("i donno any more");
        printf("\n");
    }

   







}

