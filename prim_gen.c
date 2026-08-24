#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number to generate the top prime numbers:");
    scanf("%d", &number);
    
    int cnt = 0;
    int x = 2;
    while(cnt < number){
        int isPrime = 1;
        for(int i = 2; i < x; ++i){
            if(x % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d ", x);
            ++cnt;
        }
        ++x;
    }
    printf("\n");

    return 0;
}