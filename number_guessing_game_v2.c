#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;
    int max_guesses = 10;

    while (no_of_guesses < max_guesses)
    {
        printf("Guess the number (%d guesses left): ", max_guesses - no_of_guesses);
        scanf("%d", &guessed_number);

        no_of_guesses++;

        if (guessed_number > randomNumber) {
            printf("It's a lower number!\n");
            printf("\n");
        }
        else if (guessed_number < randomNumber) {
            printf("It's a higher number!\n");
            printf("\n");
        }
        else {
            printf("You did it!!\n");
            printf("You guessed the number in %d guesses.\n", no_of_guesses);
            return 0;
        }
    }

    printf("Out of guesses! The number was %d.\n", randomNumber);
    return 0;
}
