#include <stdio.h>

int sum_skip_multiples(int limit, int skip_factor) {
    int sum = 0;
    for (int i = 1; i <= limit; i++) {
        if (i % skip_factor == 0) {
            continue;
        }
        sum += i;
    }
    return sum;
}

int main(void) {
    printf("Sum (1-100, skipping multiples of 5) = %d\n", sum_skip_multiples(100, 5));
    return 0;
}