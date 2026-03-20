// more effective algorithm for calculating power O(log n)

#include<stdio.h>

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return power(x * x, n/2);
    }
    else {
        return x * (power(x, n - 1));
    }
}
int main() {
    int x, n, result;

    printf("Enter the value (X^n): ");
    scanf("%d^%d", &x, &n);

    result = power(x, n);
    printf("%d\n", result);

    return 0;
}