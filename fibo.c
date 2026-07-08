//DATE: 7/5/2026
//NEXT = CURRENT * 2 - [NUMBER 2 POSITIONS BEFORE]
// 1, 2, 3, 5, 8, 13, 21, 34, ...


#include <stdio.h>

int main() {
    int n = 20; // Number of Fibonacci numbers to generate

    long long fib[n];

    // Initial values
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;

    printf("Fibonacci Sequence:\n");
    printf("%lld %lld %lld ", fib[0], fib[1], fib[2]);

    // Generate using:
    // next = 2 * current - previous_previous
    for (int i = 3; i < n; i++) {
        fib[i] = 2 * fib[i - 1] - fib[i - 3];
        printf("%lld ", fib[i]);
    }

    printf("\n");

    return 0;
}
