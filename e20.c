#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator from user
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if dividing by zero
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.");
                return 1; // Exit program with error code
            }
            result = num1 / num2;
            break;
        default:
            printf("Error! Operator is not valid.");
            return 1; // Exit program with error code
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0; // Exit program successfully
}
