#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
     srand(time(0));
     int number = rand() % 100 + 1;// Generates a random number between 1 and 100
     
     int guess, attempts = 0;

     printf("Welcome to the Number Guessing Game!\n");
     printf("I have selected a number between 1 and 100. Can you guess it?\n");

     do
     {
        printf("Enter your guess:");
        scanf("%d", &guess);
        ++attempts;
        if(guess > number){
            printf("Too high! Try again.\n");
        }else if(guess < number){
            printf("Too Low! Try again.\n");
        }
     }while(guess != number);
     printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);

     return 0;
}