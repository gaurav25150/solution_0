#include <stdio.h>
#include <string.h>

double compute_discount(double bill, const char *payment_mode, int is_loyal) {
    double discount = 0.0;

    if (bill > 5000) {
        discount = (strcmp(payment_mode, "credit") == 0) ? 0.20 : 0.15;
    } else if (bill >= 3000) {
        discount = is_loyal ? 0.10 : 0.05;
    }

    return bill * (1.0 - discount);
}

int main(void) {
    double bill;
    char payment_mode[20];
    char loyalty[5];

    printf("Enter bill amount: ");
    scanf("%lf", &bill);

    printf("Payment mode (credit/cash/upi): ");
    scanf("%s", payment_mode);

    printf("Loyalty member? (yes/no): ");
    scanf("%s", loyalty);

    int is_loyal = (strcmp(loyalty, "yes") == 0);

    double final_amount = compute_discount(bill, payment_mode, is_loyal);
    printf("Final bill amount: %.2f\n", final_amount);

    return 0;
}