// testing array sizes

#include<stdio.h>
#define SIZE ((int) sizeof(arr) / sizeof(arr[0])) // you must not specify size for array declaration of int char or others
int main()
{

    char arr[] = {};

    printf("%zu", SIZE);

    return 0;
}