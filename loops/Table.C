//WAP to display multiplication table
#include <stdio.h>

int main() {
    int num, i = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print multiplication table using a do-while loop
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        ++i;
    } while (i <= 10);

    return 0;
}
