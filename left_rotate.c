#include<stdio.h>
#include<string.h>

void reverse_string(char *s)
{
    int len = strlen(s);
    if(len <= 1) return;
    char *left = s;
    char *right = s + len - 1;

    while(left < right){
        char temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}
void left_rotate(char *s, int k)
{
    int len = strlen(s);
    if(len <= 1) return;
    while(k >= len){
        k %= len;
    }
    if(k == 0) return;

    char *left = s; 
    char *right = s + k -1;
    
    while(left < right){
        char temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }

    left = s + k;
    right = s + len - 1;
    while(left < right){
        char temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
    reverse_string(s);
}
int main()
{
    char s[] = "Hello World!";
    int k = 6;
    printf("%s\n", s);
    left_rotate(s, k);
    printf("%s\n", s);

    return 0;
}