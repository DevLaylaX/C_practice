#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number to calculate its factorial:\n");
    scanf("%d", &number);

    int fact = 1;

    for(int i = 1; i <= number; ++i){
        fact *= i;
    }

    printf("The factorial of %d,also denoted as %d! is:%d\n", number, number, fact);

    return 0;
}