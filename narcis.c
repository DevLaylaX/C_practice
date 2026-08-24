#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter a number to calculate the narcissistic numbers( 3 <= n <= 7):");
    scanf("%d", &n);

    int min = pow( 10, n-1 );
    int max = pow( 10, n) - 1;
    
    for(int i = min; i <= max; ++i){
        int t = i;
        int sum = 0;
        do{
            int d = t % 10;
            t /= 10;
            sum += pow( d , n);
        }while( t != 0);
        if( sum == i){
            printf("%d\n", i);
        }
    }

    return 0;
}