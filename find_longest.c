#include<stdio.h>

char *find_longest_word(char *s)
{
    if(*s == '\0') return NULL;
    int Max_len = 0;
    char *longest;
    char *word_start;
    while(*s != '\0'){
        int len = 0;
        while((*s >= 'a' && *s <= 'z')||(*s >= 'A' && *s <= 'Z')){
        ++s;
        ++len;
        }
        ++s;
        word_start = s - len - 1;
        if(len > Max_len){
        Max_len = len;
        longest = word_start;
        }
    }
    return longest;
}

int main()
{
    char s[] = "I love programming!";
    printf("%s\n", s);
    char *p = find_longest_word(s);
    if(p != NULL){
        printf("%s\n", p);
    }else{
        printf("NULL\n");
    }
    return 0;
}