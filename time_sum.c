#include<stdio.h>

int main()
{
    int t1,t2;

    scanf("%d %d", &t1, &t2);

    int t = (t1 / 100 * 60 + t1 % 100 + t2) / 60 * 100 + (t1 / 100 * 60 + t1 % 100 + t2) % 60;

    printf("%d", t);

    return 0;
}