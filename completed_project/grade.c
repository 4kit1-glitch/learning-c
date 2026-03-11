// printing grade score with th switch

#include<stdio.h>

int main()
{
    int units,tens,grade;

    printf("enter your grade: ");
    scanf("%d",&grade);

    tens = grade / 10;

    printf("Letter Grade: ");

    if(grade > 100 || grade < 0)
    {
        printf("grade is out of range\n");
    }
    else
    {
        switch (tens)
        {
            case 0: case 1: case 2: case 3: case 4: case 5: printf("F"); break;
            case 6: printf("D"); break;
            case 7: printf("C"); break;
            case 8: printf("B"); break;
            case 9: case 10: printf("A"); break;
    
            default: break;
        }
    }

    



    return 0;
}