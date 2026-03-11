// Date:09/02/26
// Program to print the volume of a shere with radius 10

#include<stdio.h>
#define PI 3.16
#define FRACTION (4.0/3.0)

int main(void)
{
    int radius;
    float volume;

    printf("Enter the radius: ");
    scanf("%d",&radius);

    volume = (FRACTION * PI *(radius*radius*radius));

    printf("radius = %d", radius);
    printf("\nvolume = %f", volume);



    return 0;
}