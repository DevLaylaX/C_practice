#include<stdio.h>

void my_strcpy(char *dest, const char *src)
{
    // int i = 0;
    // while(src[i] != '\0'){
    //     dest[i] = src[i];
    //     ++i;
    // }
    // dest[i] = '\0';
    while(*src != '\0'){
        *dest++ = *src++;
    }
    *dest = '\0';
}
int main()
{
    char *dest;
    char *src = "Hello World!";

    my_strcpy(dest, src);
    printf("%s", dest);

    return 0;
}