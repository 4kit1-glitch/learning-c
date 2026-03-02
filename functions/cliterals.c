// testing compound literals

#include<stdio.h>

int literals(int b[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += b[i];
    }
    return sum;
}

int main()
{
    int arr[4];
    int i = 0 , j = 10;
    int sum = literals((int[]){1 + j * i,2,3,j}, 4);

    printf("%d", sum);

    return 0;
}