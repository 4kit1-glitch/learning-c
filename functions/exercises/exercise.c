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

int main(){
    



    return 0;
}