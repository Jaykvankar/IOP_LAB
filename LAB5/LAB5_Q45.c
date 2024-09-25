#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int luckyNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to the Numeric Guessing Game!\n");
    printf("I've picked a lucky number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == luckyNumber)
        {
            printf("Congratulations! You guessed it right in %d attempts.\n", attempts);
            break;
        } else if (guess < luckyNumber)
        {
            printf("Try a higher number.\n");
        } else
        {
            printf("Try a lower number.\n");
        }
    } while (1);

    return 0;
}
