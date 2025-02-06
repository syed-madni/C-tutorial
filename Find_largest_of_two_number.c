#include<stdio.h>

int main() {
    int a, b, large;

    // Input two numbers
    printf("\nEnter the first number:");
    scanf("%d", &a);
    printf("\nEnter the second number:");
    scanf("%d", &b);

    // Compare the numbers to find the largest
    if (a > b) {
        large = a;
    } else {
        large = b;
    }

    // Print the largest number
    printf("\nThe largest number is: %d\n", large);

    return 0;
}
