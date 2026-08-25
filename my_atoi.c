#include<stdio.h>

int my_atoi(const char *s)
{
    if(*s == '\0') return 0;
    
    while(*s == ' '){
        ++s;
    }
    int sum = 0;
    int sigh = 1;
    if(*s == '-'){
        sigh = -1;
        ++s; 
    }else if(*s == '+') ++s;
    while(*s >= '0' && *s <= '9'){
        sum = sum*10 + (*s - '0');
        ++s;
    }
    return sigh*sum;
}

int main()
{
    char *s = " 324ABC";
    printf("%s\n", s);
    printf("%d\n", my_atoi(s));

    return 0;
}