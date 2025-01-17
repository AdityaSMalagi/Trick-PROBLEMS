#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Prompt user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
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
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 1;
    }

    // Display the result
    printf("The result is: %.2lf\n", result);

    return 0;
}
