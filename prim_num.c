#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number to see how many prime numbers are there from 1 to it and also to see the prime numbers:");
    scanf("%d", &number);

    int k = 0;

    for(int x = 2; x <= number; ++x){
        int isPrime = 1;
        for(int i = 2; i < x; ++i){
            if(x % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d ", x);
            ++k;
        }
    }
    printf("\n");
    printf("Between 1 and %d there are %d prime numbers above.\n", number, k);

    return 0;
}