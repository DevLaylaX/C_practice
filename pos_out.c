#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number to output each digit of it in positive order:");
    scanf("%d", &n);

    int mask = 1;
    int k = n;
    
    while( k != 0){
        k /= 10;
        mask *= 10;
    }
    mask /= 10;

    do{
        int d = n / mask;
        printf("%d", d);
        if(mask > 9){
            printf(" ");
        }
        n %= mask;
        mask /= 10;
    }while( mask != 0);

    printf("\n");

    return 0;
}