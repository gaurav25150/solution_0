#include <stdio.h>

#define APPLE_RATE_PER_KG 120.0
#define BANANA_RATE_PER_DOZEN 68.0
#define DISCOUNT_THRESHOLD 500.0
#define DISCOUNT_RATE 0.10

double compute_total_cost(double apple_kg, double banana_dozens) {
    double total = apple_kg * APPLE_RATE_PER_KG + banana_dozens * BANANA_RATE_PER_DOZEN;
    if (total >= DISCOUNT_THRESHOLD) {
        total = total * (1.0 - DISCOUNT_RATE);
    }
    return total;
}

int main(void) {
    double apple_kg, banana_dozens;
    printf("Enter quantity of apples (kg): ");
    scanf("%lf", &apple_kg);
    printf("Enter quantity of bananas (dozens): ");
    scanf("%lf", &banana_dozens);

    if (apple_kg < 0 || banana_dozens < 0) {
        printf("Invalid input. Quantities cannot be negative.\n");
        return 1;
    }

    double total_cost = compute_total_cost(apple_kg, banana_dozens);
    printf("Total payable amount: %.2f\n", total_cost);

    return 0;
}