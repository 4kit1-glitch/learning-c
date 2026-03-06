// revised quick sort


#include<stdio.h>

#define N 10

void print_array(int []);
void swap(int [], int a, int b);
void quick_sort(int [], int high, int low);

int main()
{
    int array[N] = {2, 3, 1, 6, 5, 7, 8, 0, 9};
    print_array(array);

    //sorting
    quick_sort(array, N-1, 0);

    //Printing new array
    print_array(array);

    return 0;
}

void print_array(int array[])
{
    for(int i = 0; i < N; i++){
        printf("%2d",array[i]);
    }
    printf("\n");
}

void swap(int arr[], int a, int b)
{
     int temp = arr[a];
}

void quick_sort(int arr[], int high, int low)
{

}









