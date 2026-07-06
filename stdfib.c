#include <stdio.h>

/**
 * This program demonstrates the recurrence relation F(n+1) = 2*F(n) - F(n-2)
 * to generate the standard Fibonacci sequence.
 */

int main() {
    int n = 15; // Number of terms to generate
    long long fib[20];

    // Initialize the first three terms
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 2;

    printf("Fibonacci sequence generated using F(n+1) = 2*F(n) - F(n-2):\n");
    printf("%lld, %lld, %lld", fib[0], fib[1], fib[2]);

    // Generate terms from n=3 to n-1
    for (int i = 2; i < n - 1; i++) {
        fib[i + 1] = 2 * fib[i] - fib[i - 2];
        printf(", %lld", fib[i + 1]);
    }

    printf("\n");
    return 0;
}
