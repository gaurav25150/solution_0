#include <stdio.h>

double perform_operation(double a, double b, int choice) {
    switch (choice) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4: return (b != 0) ? a / b : 0.0;
        default: return 0.0;
    }
}

int main(void) {
    int choice;
    double num1, num2;

    do {
        printf("\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (choice == 4 && num2 == 0) {
                printf("Error: Division by zero.\n");
                continue;
            }
            printf("Result = %.2lf\n", perform_operation(num1, num2, choice));
        } else if (choice != 5) {
            printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}