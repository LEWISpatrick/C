#include <stdio.h>

int main() {
    int choice, number1, number2;
    float result;

    // Display the menu
    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    
    // Read the user's choice
    scanf("%d", &choice);

    // Ask the user for two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    // Perform the operation based on user's choice
    switch (choice) {
        case 1:
            result = number1 + number2;
            printf("Result: %d\n", (int)result);
            break;
        case 2:
            result = number1 - number2;
            printf("Result: %d\n", (int)result);
            break;
        case 3:
            result = number1 * number2;
            printf("Result: %d\n", (int)result);
            break;
        case 4:
            if (number2 != 0) {
                result = (float)number1 / number2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
