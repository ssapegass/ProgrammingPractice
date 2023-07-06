#include <stdio.h>

// Function to calculate the count of desired sequences
int countSequences(int n) {
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    // Filling the dp array
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 12345;
    }

    return dp[n];

}

int main() {
    int n;

    // Input the length of the sequence from the user
    printf("Enter the length of the sequence (1 < n < 10000): ");
    scanf("%d", &n);

// Calculate the count of desired sequences
    int result = countSequences(n);

// Output the result
    printf("Count of desired sequences: %d\n", result);

    return 0;
}
