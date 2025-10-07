#include <stdio.h>

int reverse_digits(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main(void) {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Number must be positive.\n");
        return 1;
    }
    printf("Reversed: %d\n", reverse_digits(num));
    return 0;
}