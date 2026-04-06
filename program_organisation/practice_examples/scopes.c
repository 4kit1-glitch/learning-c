#include <stdio.h>

int sum_digits(int n) {
    int sum;    // this is a local vairable every statement below it is its scope

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {





    return 0;
}