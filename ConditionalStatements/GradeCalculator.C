//WAP to enter percentage and display grade obtained by the student
#include <stdio.h>

int main() {
    float percentage;

    // Input the percentage
    printf("Enter the percentage obtained: ");
    scanf("%f", &percentage);

    // Check the grade based on the percentage
    if (percentage >= 90.0) {
        printf("Grade: A\n");
    } else if (percentage >= 80.0) {
        printf("Grade: B\n");
    } else if (percentage >= 70.0) {
        printf("Grade: C\n");
    } else if (percentage >= 60.0) {
        printf("Grade: D\n");
    } else if (percentage >= 50.0) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
