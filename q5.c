#include <stdio.h>

int xor_swap(int *a, int *b) {
    if (*a == *b) {
        return 0;
    }

    *a ^= *b;
    *b ^= *a;
    *a ^= *b;

    return 0;
}

int main(void) {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    xor_swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);

    return 0;
}