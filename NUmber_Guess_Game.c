// This is a simple number guessing game implemented in C. The player has to guess a randomly generated number within a certain range.
//  The program provides feedback on whether the guess is too high, too low, or correct.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;
    int attempts = 0;
    int maxAttempts = 5;

    // Seed the random number generator
    srand(time(0));    // Initializes the random number generator with a starting value called a seed. Think of it as setting the starting point for generating random numbers.

     // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf("\t\t\t Welcome to the Number Guessing Game!\n");
    printf("\t\t ----------------------------------------------------\n");
    printf("\n");
    printf("\t I have selected a number between 1 and 100.\n");
    printf("\t Try to guess the number within %d attempts.\n", maxAttempts);
    printf("\n");
    

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess (1-100): ", attempts + 1);
        scanf("%d", &guess); // &guess The & operator gives scanf() the memory address of the variable guess, so it knows where to store the number the user enters.

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("\t\t\t Congratulations! You guessed the number correctly.\n");
            return 0;
        }

        attempts++;
    }

    printf("\t\t\t Sorry, you've used all your attempts. The number was %d.\n", secretNumber);
    return 0;
}
