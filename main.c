#include <stdio.h>

#define MAX_LOBSTERS 100 // Define a constant for the maximum number of lobsters

int max(int a, int b) { // Define a function to return the maximum of two numbers
    return (a > b) ? a : b; // Return a if it is greater than b, otherwise return b
}

void display_lobsters(int dp[MAX_LOBSTERS][MAX_LOBSTERS], int size[MAX_LOBSTERS], int value[MAX_LOBSTERS], int n, int x) {
    printf("Lobsters included in the net are:\n"); // Print message
    int i = n, j = x;
    while (i > 0 && j > 0) { // Traverse the dp matrix to determine the lobsters included in the net
        if (dp[i][j] != dp[i - 1][j]) { // If the value at the current position differs from that of the previous row
            printf("Lobster %d: Size = %d, Value = %d\n", i, size[i], value[i]); // Print details about the lobster
            j -= size[i]; // Subtract the size of the lobster from the current capacity of the net
        }
        i--; // Move to the previous lobster
    }
}

int main() {
    int n, x; // Declare variables for the number of lobsters and the net capacity
    printf("Enter the number of lobsters and the net capacity: "); // Print input message
    scanf("%d %d", &n, &x); // Read the number of lobsters and the net capacity
    int size[MAX_LOBSTERS], value[MAX_LOBSTERS]; // Declare arrays for the size and value of the lobsters
    int dp[MAX_LOBSTERS][MAX_LOBSTERS]; // Declare the dynamic programming matrix

    printf("Enter the sizes of the lobsters: "); // Print input message for the lobster sizes
    for (int i = 1; i <= n; i++) { // Iterate over the lobsters
        scanf("%d", &size[i]); // Read the size of the lobster
    }
    printf("Enter the values of the lobsters: "); // Print input message for the lobster values
    for (int i = 1; i <= n; i++) { // Iterate over the lobsters
        scanf("%d", &value[i]); // Read the value of the lobster
    }

    for (int i = 0; i <= n; i++) { // Iterate over the number of lobsters
        for (int j = 0; j <= x; j++) { // Iterate over the net capacity
            if (i == 0 || j == 0) { // If there are no lobsters or the net has no capacity
                dp[i][j] = 0; // Initialize dp with 0
            } else if (size[i] <= j) { // If the size of the lobster is less than or equal to the net capacity
                dp[i][j] = max(value[i] + dp[i - 1][j - size[i]], dp[i - 1][j]); // Calculate the maximum value of the lobsters
            } else { // Otherwise
                dp[i][j] = dp[i - 1][j]; // Copy the value from the previous row
            }
        }
    }

    printf("The maximum value is: %d\n", dp[n][x]); // Print the maximum value of the lobsters that fit in the net
    display_lobsters(dp, size, value, n, x); // Call the function to display the lobsters included in the net

    return 0; // Return 0 to indicate that the program finished successfully
}
