//WAP to display sum of N positive numbers
#include <stdio.h>

int main() {
    int N, i, sum = 0;

    // Input the value of N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Calculate the sum of numbers from 1 to N
    for (i = 1; i <= N; ++i) {
        sum += i;
    }

    // Display the sum
    printf("Sum of numbers from 1 to %d is %d\n", N, sum);

    return 0;
}
