#include<stdio.h>

int my_strlen(const char *s)
{
    int cnt = 0;
    // int i = 0;
    // while(s[i] != '\0'){
    //     ++i;
    //     ++cnt;
    // }
    while(*s++ != '\0'){
        ++cnt;
    }
    return cnt;
}

int main()
{
    char *a = "Hello World!";
    printf("%d", my_strlen(a));

    return 0;
}