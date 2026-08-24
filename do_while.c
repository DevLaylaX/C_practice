#include<stdio.h>

int main()
{
    int x;
    int n = 0;

    printf("请输入一个整数：");
    scanf("%d", &x);

    do{
        x /= 10;
        ++n;
    } while(x != 0);

    printf("该整数的位数为：%d\n", n);

    return 0;
}