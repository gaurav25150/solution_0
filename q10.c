#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int play_guess_game(void) {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess, attempts = 0, max_attempts = 7;

    while (attempts < max_attempts) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess == target) {
            printf("Correct! You guessed it in %d tries.\n", attempts);
            return 0;
        } else if (guess < target) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    printf("Out of attempts! The number was %d.\n", target);
    return 0;
}

int main(void) {
    play_guess_game();
    return 0;
}