#include <stdio.h>

int smallest_of_three(int a, int b, int c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

int main(void) {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Smallest = %d\n", smallest_of_three(a, b, c));

    return 0;
}