// program prints a one month  calender
// very poor code not effective to redo tmmr and readjust the loops
// tobe updated and completed later
// edited by KENGAH IRENEAUS
#include<stdio.h>

int main()
{
    int days,start,count,space = 0;

    printf("enter the no of days: ");
    scanf("%d", &days);

    printf("enter the starting day of the week(1 sun , 7 sat): ");
    scanf("%d", &start);

    printf("******calender******\n");

   switch (start)
   {

        case 1:
            
            for(int i = 1 , count = 1; i <= days ; i++,count++)
            {
                printf("%2d ",i);

                if(count == 7)
                {
                    printf("\n");
                    count = 0;
                }

            }

        break;

        case 2:
           
            for(int i = 0 , count = 1; i <= days ; i++ , count ++)
            {
                

                if (space < 1)
                {
                    printf("   ");
                    space++;
                }
                else
                {
                    printf("%2d ",i);

                    if(count == 7)
                    {
                        printf("\n");
                        count = 0;
                    }
                }

            }
            
        break;

        case 3:
            for(int i = 0 , count = 1; i <= days ; i++ , count ++)
            {
                
                if (space < 1)
                {
                    printf("   ");
                    space++;
                }
                else
                {
                    printf("%2d ",i);

                    if(count == 7)
                    {
                        printf("\n");
                        count = 0;
                    }
                }

            }
            
        break;
        case 4:
            for(int i = 0 , count = 1; i <= days ; i++ , count ++)
            {
                

                if (space < 1)
                {
                    printf("   ");
                    space++;
                }
                else
                {
                    printf("%2d ",i);

                    if(count == 7)
                    {
                        printf("\n");
                        count = 0;
                    }
                }

            }
            
        break;
        case 5:
            for(int i = 0 , count = 1; i <= days ; i++ , count ++)
            {
                

                if (space < 1)
                {
                    printf("   ");
                    space++;
                }
                else
                {
                    printf("%2d ",i);

                    if(count == 7)
                    {
                        printf("\n");
                        count = 0;
                    }
                }

            }
            
        break;
        case 6:
            for(int i = 0 , count = 1; i <= days ; i++ , count ++)
            {
                

                if (space < 1)
                {
                    printf("   ");
                    space++;
                }
                else
                {
                    printf("%2d ",i);

                    if(count == 7)
                    {
                        printf("\n");
                        count = 0;
                    }
                }

            }
            
        break;
        case 7:
            for(int i = 0 , count = 1; i <= days ; i++ , count ++)
            {
                

                if (space < 1)
                {
                    printf("   ");
                    space++;
                }
                else
                {
                    printf("%2d ",i);

                    if(count == 7)
                    {
                        printf("\n");
                        count = 0;
                    }
                }

            }
            
        break;

   
   default:
    break;
   }

   printf("\n");

    return 0;
}
