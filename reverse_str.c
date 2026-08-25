#include<stdio.h>
#include<string.h>

void reverse_string(char *s)
{
    int len = strlen(s);
    if(len <= 1) return;
    char *left = s;
    char *right = s + len - 1;

    while(left++ < right--){
        char temp = *left;
        *left = *right;
        *right = temp;
    }
}
int main()
{
    char s[] = "ABCDEFG";
    printf("%s\n", s);
    reverse_string(s);
    printf("%s\n", s);

    return 0;
}