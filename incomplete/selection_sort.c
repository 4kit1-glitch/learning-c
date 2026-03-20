// sorts by selection sort

#include<stdio.h>

#define N 6

void input(int arr[]);
void sort(int arr[]);
void print(int arr[]);

int main(){
    int numbers[N];

    // get input and print arr
    input(numbers);
    print(numbers);
    
    // sort arr  and print
    sort(numbers);
    print(numbers);


    return 0;
}

void input(int arr[]){
    printf("enter 6 numbers in the arr: ");
    for(int i = 0; i < N; i++){
        scanf("% d", arr[i]);
    }
}