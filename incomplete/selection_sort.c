// sorts by selection sort

#include<stdio.h>

#define N 6

void input(int arr[]);
void sort(int arr[], int n);
void print(int arr[]);

int main(){
    int numbers[N];
    int n = N;

    // get input and print arr
    input(numbers);
    print(numbers);
    
    // sort arr  and print
    sort(numbers, n);
    print(numbers);


    return 0;
}

void input(int arr[]){
    printf("enter 6 numbers in the arr: ");
    for(int i = 0; i < N; i++){
        scanf("%d,", &arr[i]);
    }
}
void print(int arr[]){
    printf("[");
    for(int i = 0; i < N; i++){
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}
void sort(int arr[], int n){
    int max = 0;
    int temp, index;

    //  exit condition
    if(n == 0){
        return;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
        // getting index of max element
        if(max == arr[i]){
            index = i;
        }
    }

    // swapping 
    temp = arr[n - 1];
    arr[n - 1] = max;
    arr[index] = temp;

    // recall
    sort(arr, n - 1);
}