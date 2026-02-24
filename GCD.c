// program to calculate the highest common factor

#include<stdio.h>

int main()
{
    int m , n , gdc= 1;

    printf("enter two intergers(a,b): ");
    scanf("%d,%d", &m,&n);

    if(m<=n)
    {
        gdc = m;

        while (m<n)
        {
            if (n%gdc == 0 && m%gdc == 0)
            {
                break;
            }
            else
            {
                gdc--;
            }
        }
        
        printf("the GDC is %d\n",gdc);
    }

    else if (m>=n)
    {
        gdc = n;

        while (m>n)
        {
            if (n%gdc == 0 && m%gdc == 0)
            {
                break;
            }
            else
            {
                gdc--;
            }
        }
        printf("the GDC is %d\n",gdc);
    }

    return 0;
}