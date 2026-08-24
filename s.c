#include<stdio.h>

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);

    int S = 0;
    int t = a;
    for( int i = 1; i <= n; ++i ){
        S += a;
        a = a*10 + t;
    }
    printf("S = %d", S);

    return 0;
}