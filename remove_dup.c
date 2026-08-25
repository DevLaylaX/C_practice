#include<stdio.h>
#include<stdbool.h>

void remove_duplicates(char *s)
{
    if(*s == '\0') return;
    
    char *read = s;
    char *write = s;

    while(*read != '\0'){
        char *check = s;
        bool duplicate = false;
        while(check < write){
            if(*check == *read){
                duplicate = true;
                break;
            }
            ++check;
        }
        if(!duplicate){
            *write++ = *read;
        }
        ++read;
    }
    *write = '\0';
}
int main()
{
    char s[] = "ABCDAEFGA";
    printf("%s\n", s);
    remove_duplicates(s);
    printf("%s\n", s);

    return 0;
}