// program reduces a fraction to its simplest form

#include<stdio.h>

int main()
{
    int m , n , gdc= 1 ,nom , denom;

    printf("enter fraction(a/b): ");
    scanf("%d/%d", &nom,&denom);

    m = nom;
    n = denom;

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
        
    //    printf("the GDC is %d\n",gdc);
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
      //  printf("the GDC is %d\n",gdc);
    }
//computes the gdc and divides the gdc by the num and denum to give in lowest form;;;
    nom /= gdc ;
    denom /= gdc;

    printf("In lowest form: %d/%d\n", nom,denom);


    return 0;
}