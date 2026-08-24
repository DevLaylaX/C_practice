#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number to reverse its digits:\n");
    scanf("%d", &number);

    int reversed = 0;
    while(number != 0){
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    printf("The reversed number is: %d\n", reversed);

    return 0;
}