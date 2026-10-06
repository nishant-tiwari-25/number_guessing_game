#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int attempts, target, guess;
    char choice;

    // Seed the random number generator once
    srand(time(NULL));

    do {
        attempts = 0;
        target = rand() % 501;

        printf("\n--- Number Guessing Game ---\n\n");
        printf("--- Game Rules ---\n");
        printf("Guess a number from 0 to 500.\n\n");

        while (1) {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            // Check if the guess is within the range
            if (guess < 0 || guess > 500) {
                printf("Please enter a number between 0 and 500.\n\n");
                continue;
            }

            attempts++;

            if (guess > target) {
                printf("Your guess is higher.\n");
                printf("Please guess again.\n\n");
            }
            else if (guess < target) {
                printf("Your guess is lower.\n");
                printf("Please guess again.\n\n");
            }
            else {
                printf("Congratulations!!! You guessed correctly.\n");
                printf("You took %d attempts to guess correctly.\n\n", attempts);
                break;
            }
        }

        do {
            printf("Play again? (y/n): ");
            scanf(" %c", &choice);

            if (choice != 'y' && choice != 'Y' &&
                choice != 'n' && choice != 'N') {
                printf("Invalid input!\n");
            }

        } while (choice != 'y' && choice != 'Y' &&
                 choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for playing!\n");

    return 0;
}
