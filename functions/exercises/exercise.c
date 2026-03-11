// Contains all the exercises in functions

#include<stdio.h>
#include<stdbool.h>

double triangle_area(double base, double hieght)
{
    double product = base * hieght;

    return product / 2;
}
bool is_between(int x, int y, int n)
{
    if((1 < x && (n-1) > x) && 1 < y && n-1 > y){
        return true;
    }
    else{
        return false;
    }
}

int main()
{




    return 0;
}