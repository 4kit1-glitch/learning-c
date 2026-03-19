// Contains all the exercises in functions

#include<stdio.h>
#include<stdbool.h>

double triangle_area(double base, double hieght){
    double product = base * hieght;
    return product / 2;
}
bool is_between(int x, int y, int n){
    if((1 < x && (n-1) > x) && 1 < y && n-1 > y){
        return true;
    }
    else{
        return false;
    }
}
int gdc(int num1, int num2){
    int r;    // remainder
    
    if(num2 == 0){
        return num1;
    }
    r = num1 % num2;
    gdc(num2, r);
}
int num_digits(int num){
    const int DIV = 10;
    int count = 0;

    do {
        num /= DIV;
        count++;
    }
    while(num != 0);

    return count;
}
int digit(int num, int k){
    int DIV = 10;
    int result;

    if(num_digits(num) < k){
        return 0;
    }
    else if(k == 1){
        return num % DIV;
    }
    return((num / DIV), (k - 1));

}
int f(int a, int b){
    printf("a = %d, b = %d\n", a, b);
    return a+b;
}
int swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return a;
}
int average(int arr[], int n){
    int lenght = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum / n;
}
int positive_nums(int arr[], int n){
    int count;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            continue;
        }
        count++;
    }
    return count;
}
double inner_product(double a[], double b[], int n){
    int prod;
    int prud_sum = 0;
    for(int i = 0; i < n; i++){
        prod = a[i] * b[i];
        prud_sum = prud_sum + prod;
    }
    return prud_sum;
}

int main(){
    


    return 0;
}