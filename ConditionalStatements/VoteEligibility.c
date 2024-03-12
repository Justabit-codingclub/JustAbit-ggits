//WAP to enter person's age and tell whether he is eligible to vote or not

#include <stdio.h>

int main() {
    int age;

    // Input the age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility to vote
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote yet.\n");
    }

    return 0;
}
