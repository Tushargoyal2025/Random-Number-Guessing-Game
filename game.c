#include<stdio.h>

int main()
{
    int secretNumber;
    int no_of_guess = 0;
    int guessed;

    printf("------------------------------------------------\n");
    printf("          WELCOME TO NUMBER GUESSING GAME       \n");
    printf("------------------------------------------------\n");
    printf("Player 1: Enter a secret number between 1 and 100: ");
    scanf("%d", &secretNumber);
    
    for(int i = 0; i < 30; i++)
    {
        printf("\n");
    }
    
    printf("------------------------------------------------\n");
    printf("          NUMBER GUESSING GAME                  \n");
    printf("------------------------------------------------\n");
    printf("Player 2: I'm thinking of a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    do{
        printf("Enter your guess: ");
        scanf("%d", &guessed);
        no_of_guess++;

        if(guessed > secretNumber)
        {
            int difference = guessed - secretNumber;
            if(difference > 25)
            {
                printf("Way too high! Lower number please!\n");
            }
            else if(difference > 10)
            {
                printf("Too high! Lower number please!\n");
            }
            else if(difference > 5)
            {
                printf("A bit high! Lower number please!\n");
            }
            else
            {
                printf("You're very close! Just a bit lower!\n");
            }
        }
        else if(guessed < secretNumber)
        {
            int difference = secretNumber - guessed; // Calculate difference for lower guesses
            if(difference > 25)
            {
                printf("Way too low! Higher number please!\n");
            }
            else if(difference > 10)
            {
                printf("Too low! Higher number please!\n");
            }
            else if(difference > 5)
            {
                printf("A bit low! Higher number please!\n");
            }
            else
            {
                printf("You're very close! Just a bit higher!\n");
            }
        }
        else
        {
            printf("\nCongratulations! You guessed it correctly!\n");
        }
    }while(guessed != secretNumber);

    printf("You guessed the number in %d guess", no_of_guess);
    if(no_of_guess > 1)
    {
        printf("es");
    }
    printf("!\n");
    
    return 0;
}