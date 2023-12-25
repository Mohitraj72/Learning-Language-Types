#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series using a while loop
    while (i <= n) {
        sum += i * i;
        i++;
    }

    // Display the result
    printf("Sum of the series 1 + 4 + 9 + ... + %d^2 is: %d\n", n, sum);

    return 0;
}
