#include <stdio.h>
#include <math.h>

double compute_emi(double principal, double annual_rate, int months) {
    if (months <= 0) {
        return 0.0;
    }

    double monthly_rate = (annual_rate / 12.0) / 100.0;

    if (monthly_rate == 0) {
        return principal / months;
    }

    double factor = pow(1 + monthly_rate, months);
    double emi = (principal * monthly_rate * factor) / (factor - 1);

    return emi;
}

int main(void) {
    double principal, annual_rate;
    int months;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (%%): ");
    scanf("%lf", &annual_rate);
    printf("Enter total months: ");
    scanf("%d", &months);

    double emi = compute_emi(principal, annual_rate, months);
    printf("Monthly EMI is: %.2f\n", emi);

    return 0;
}