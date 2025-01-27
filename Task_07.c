#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Difference is %d\n", num1-num2);
    } else if (num1 < num2) {
        printf("Difference is %d\n", num2-num1);
    } else {
        printf("%d\n", 0);
    }

    return 0;
}
