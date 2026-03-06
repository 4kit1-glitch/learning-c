// revised quick sort


#include<stdio.h>

#define N 10

void print_array(int []);
void swap(int [], int a, int b);
int split(int [], int high, int low);
void quick_sort(int [], int high, int low);

int main()
{
    int array[N] = {2, 3, 1, 6, 5, 7, 8, 10, 9, 4};
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
        printf("%3d",array[i]);
    }
    printf("\n");
}

void swap(int arr[], int a, int b)
{
     int temp = arr[a];
     arr[a] = arr[b];
     arr[b] = temp;
}

int split(int arr[], int high, int low)
{   
    int part_element = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] < part_element){
            i++;
            swap(arr, j, i);
        }
        swap(arr, high, i + 1);
        return i + 1;
    }
}

void quick_sort(int arr[], int high, int low)
{
    if(low < high){

        int middle = split(arr, high, low);

        quick_sort(arr, middle - 1, low);
        quick_sort(arr, high, middle + 1);

    }

}









