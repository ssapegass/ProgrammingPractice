#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, count = 0;
    // Read the input number n
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    // Find the equal divisors of the number n
    for (int i = 1; i <= n; i++) {

        if (n % i == n / i) {
            printf("[%d-%d] ", n%i, n/i);
            count++;
        }
    }

    // Output the count of equal divisors
    printf("\nNumber of equal divisors of %d: %d\n", n, count);

    return 0;
}