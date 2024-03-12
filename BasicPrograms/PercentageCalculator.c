#include <stdio.h>

int main() {
    int maths, english, physics, chemistry, ip;
    int totalMarks;
    float percentage;

    // Input marks for 5 subjects
    printf("Enter marks for Maths (out of 100): ");
    scanf("%d", &maths);
    printf("Enter marks for English (out of 100): ");
    scanf("%d", &english);
    printf("Enter marks for Physics (out of 100): ");
    scanf("%d", &physics);
    printf("Enter marks for Chemistry (out of 100): ");
    scanf("%d", &chemistry);
    printf("Enter marks for IP (out of 100): ");
    scanf("%d", &ip);

    // Calculating total marks
    totalMarks = maths + english + physics + chemistry + ip;

    // Calculate percentage
    percentage = (float)totalMarks / 5;

    // Displaying the result
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
