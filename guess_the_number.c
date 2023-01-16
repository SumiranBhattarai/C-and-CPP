#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(0));
    int n = rand() % 100;
    int total_guess = 0;
    int guess;
    printf("A random number is generated between 0 and 100");
    printf("\nScore\nImpossibly Lucky: 1 Guess\nLucky: 2 Guess\nExcellent: 3 Guess\nNot Bad: 4 Guess\nToday is not your day: 5+  Guess\n");
    while (1)
    {
        printf("\nGuess the number: ");
        scanf("%d", &guess);
        if (guess < n)
        {
            printf("\nguess higher");
        }
        else if (guess > n)
        {
            printf("\nguess lower");
        }
        else
        {
            switch (total_guess)
            {
            case 1:
                printf("\nImpossibly Lucky");
                break;
            case 2:
                printf("\nLucky");
                break;
            case 3:
                printf("\nExcellent");
                break;
            case 4:
                printf("\nNot Bad");
                break;
            default:
                printf("\nToday is not your day");
            }
            printf("\nYou have guessed the correct number in %d guesses.\n", total_guess);
            exit(1);
        }
        total_guess++;
    }
}