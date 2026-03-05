// implements the quicksort algorithm;;;

#include<stdio.h>

#define N 10

void input(int arr[]);
void quick_sort(int arr[], int high, int low);
int split(int arr[], int high, int low);
void output(int arr[]);

int main()
{
    int a[N];
    int high = N - 1, low = 0;

    input(a);
    printf("the sorted array is: \n");
    quick_sort(a, high, low);
    output(a);


    return 0;
}

void input(int arr[])
{
    printf("enter the elements to sort");
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
}

void quick_sort(int arr[], int high, int low)
{
    int middle;

    if(low >= high){
        return;
    }

    middle = split(arr, high, low);

    quick_sort(arr, middle -1, low);
    quick_sort(arr, high, middle + 1);
}

int split(int arr[], int high, int low)
{
    int part_element = arr[low];

    for(;;){
        while(low < high && part_element <= arr[high]){
            high--;

            if(low >= high){
                break;
            }
            arr[low++] = arr[high];
        }
        while(low < high && arr[low] <= part_element){
            low++;

            if(high <= low){
                break;
            }
            arr[high--] = arr[low];
        }
        arr[high] = part_element;

        return high;
    }
}

void output(int arr[])
{
    for(int i = 0; i < N; i++){
        printf("%2d", arr[i]);
    }
}