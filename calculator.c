#include <stdio.h>

// Continuous Calculator in C
// Author: Shanavas Shafi
// Description: A simple console-based calculator that supports continuous operations like 1+2=3 -> +5=8 -> *2=16 etc.

int main() {
    float result = 0, num;
    char operator;
    int first = 1;

    printf("------ CONTINUOUS CALCULATOR ------\n");
    printf("Display: 0\n\n");

    while (1) {
        if (first) {
            printf("Enter a number: ");
            scanf("%f", &result);
            first = 0;
        }

        printf("Enter operator (+, -, *, /, C to clear, Q to quit): ");
        scanf(" %c", &operator);

        if (operator == 'C' || operator == 'c') {
            result = 0;
            first = 1;
            printf("Cleared! Display: 0\n\n");
            continue;
        }

        if (operator == 'Q' || operator == 'q') {
            printf("Exiting Calculator... Goodbye!\n");
            break;
        }

        printf("Enter next number: ");
        scanf("%f", &num);

        switch (operator) {
            case '+': result = result + num; break;
            case '-': result = result - num; break;
            case '*': result = result * num; break;
            case '/':
                if (num != 0)
                    result = result / num;
                else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                break;
            default:
                printf("Invalid operator!\n");
                continue;
        }

        printf("Display: %.2f\n\n", result);
    }

    return 0;
}
