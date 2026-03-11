// Date:10/02/2026
// Adding  two fractions

#include<stdio.h>
int main(void)
{   

    int num1 , denom1, num2,denom2 , result_num ,result_denom;

    printf("enter the first fraction (a/b) and second (A/B) separate with +");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2 , &denom2);

    result_num = (num1 * denom2) + (num2 * denom1);
    result_denom = (denom1*denom2);

    printf("the added fraction is : %d/%d\n",result_num , result_denom);







    return 0;
}