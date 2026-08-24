#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    int cnt = 0;
    int sum = 0;
    for(int x = m; x <= n; ++x){
        int isPrime = 1;
        if( x == 1 ){
            continue;
        }
        for(int i = 2; i < x; ++i){
            if( x % i == 0){
                isPrime = 0;
                break;
            }
        }if( isPrime == 1 ){
            ++cnt;
            sum += x;
        }
    }
    printf("%d %d\n", cnt, sum);

    return 0;
}