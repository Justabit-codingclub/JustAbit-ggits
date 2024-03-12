//WAP to display count of digits in a number
#include <stdio.h>

int main() {
    int num, count = 0;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        ++count;
    }

    // Display the count of digits
    printf("Number of digits: %d\n", count);

    return 0;
}
