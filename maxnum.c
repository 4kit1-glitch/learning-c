//checks max from 4 intergers
// using as few if statements as possible


#include<stdio.h>
int main()
{   
    int i1,i2,i3,i4,max1,max2;

    printf("enter four intergers(separate with comma): ");
    scanf("%d,%d,%d,%d",&i1,&i2,&i3,&i4);
     //3 if statements
    if ( i1 < i2)
    {
        max1 = i2;
    }
    else {max1 = i1;}

    if (i3 < i4)
    {
        max2 = i4;
    }
    else
    {
        max2 = i3;
    }
    if(max1 < max2)
    {
        printf("Max number is %d",max2);
    }
    else
    {
        printf("Max number is %d", max1);
    }




    return 0;
}