#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series using a while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    // Display the result
    printf("Sum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);

    return 0;
}
