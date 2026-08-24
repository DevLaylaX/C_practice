#include<stdio.h>

int main()
{
    char c;
    char d;
    c = 1;
    d = '1';

    if( c == d ){
        printf("Equal.\n");
    }else{
        printf("Not equal.\n");
    }
    printf("c=%d\n", c);
    printf("d=%c\n", d);

    char e;
    scanf("%c", &e);
    printf("e=%d\n", e);
    printf("e='%c'\n",e);

    if( 49 == '1' ){
        printf("OK.\n");
    }

    return 0;
}