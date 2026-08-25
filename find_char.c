#include<stdio.h>

char *find_char(char *s, char ch)
{
    while(*s != '\0'){
        if(*s == ch){
            return s;
        }
        ++s;
    }
    return NULL;
}

int main()
{
    char *s = "Hello World!";
    char target = 'e';
    char *p = find_char(s, target);
    
    if(p != NULL){
        printf("%d\n", p - s);
    }else{
        printf("NULL\n");
    }
    return 0;
}