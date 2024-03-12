//WAP to create a calculator using switch statements
#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Input numbers and operator
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform operation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
