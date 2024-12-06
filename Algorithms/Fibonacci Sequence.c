#include <stdio.h>

int fib(int n) {
    int f[n + 2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    int n = 9;
    printf("Fibonacci number is %d\n", fib(n));
    return 0;
}