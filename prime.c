#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number to tell whether it is prime or not:");
    scanf("%d", &number);

    int isPrime = 1;
    for(int i=2; i<number; ++i){
        if(number % i == 0){
            printf("%d is not a prime number.\n", number);
            printf("And it is divisible by %d.\n", i);
            isPrime = 0;
            break;
        }
    }   
    if(isPrime == 1){
        printf("%d is a prime number.\n", number);
    }

    return 0;
}