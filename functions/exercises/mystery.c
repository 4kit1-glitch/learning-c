// a mystery function

#include<stdio.h>

// this function converts from base 10 to base 2
void pb(int n){
    int i = n;
    if(n != 0){
        pb(n / 2);
        putchar('0' + (n % 2));
        printf("%d", i);
    }
    
}
int main(){
    pb(25);

    return 0;
}