#include <stdio.h>

int count_one_bits(unsigned char num) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        count += (num >> i) & 1;
    }
    return count;
}

int main(void) {
    unsigned int value;
    printf("Enter an unsigned 8-bit integer (0-255): ");
    scanf("%u", &value);

    if (value > 255) {
        printf("Value out of range.\n");
        return 1;
    }
    printf("Number of 1 bits: %d\n", count_one_bits((unsigned char)value));
    return 0;
}