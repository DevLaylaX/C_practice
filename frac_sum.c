#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number to calculate the sum from 1 to 1/n:");
    scanf("%d", &n);
    
    double sum = 0.0;
    double sign = 1.0;

    for(int i = 1; i <= n; ++i){
        sum += sign/i;
        sign = -sign;
    }

    printf("The sum is %f.\n", sum);
    
    return 0;
}