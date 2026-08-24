#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers to calculate the greatest common diviser:");
    scanf("%d %d", &a, &b);
    
    int t;
    while( b != 0){
        t = a%b;
        a = b;
        b = t;
    }
    printf("The gcd = %d.\n", a);

    return 0;
}