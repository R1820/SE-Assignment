#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 7;

    // Seed the random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it correctly.\n", attempts);

    for (int i = 1; i <= attempts; i++)
        {
          printf("Attempt %d: Enter your guess: ", i);
          scanf("%d", &guess);

          if (guess == number)
            {
              printf("Congratulations! You guessed the number correctly in %d attempt(s)!\n", i);
              return 0;
            }
          else if (guess < number)
            {
              printf("Too low!\n");
            }
          else
            {
              printf("Too high!\n");
            }
         }

    printf("Sorry! You've used all your attempts. The correct number was %d.\n", number);

    return 0;
}
