#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = 0.0;
    int cnt = 0;
    double a = 1.0, b = 2.0;
    double c;
    do{
        sum += b / a;
        c = b;
        b += a;
        a = c;
        ++cnt;
    }while( cnt < n );

    printf("%.2f", sum);

    return 0;
}