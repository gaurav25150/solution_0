#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("%d\n", number % 2 == 0);

    return 0;
}