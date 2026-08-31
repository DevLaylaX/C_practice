#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char **split(const char *s, char delim)
{
    int cnt = 1;
    const char *p = s;
    const char *start = s;
    while(*p != '\0'){
        if(*p == delim){
            ++cnt;
        }
        ++p;
    }
    char **split = (char**)malloc((cnt + 1)*sizeof(char *));
    int i = 0;
    while(*s != '\0' && i < cnt){
        int len = 0;
        while(*s++ != delim){
            ++len;
        }
        char *token = (char*)malloc((len + 1)*sizeof(char));
        strncpy(token, start, len);
        token[len] = '\0';
        split[i++] = token;
        start = s;
    }
    split[i] = NULL;
    return split;
}
void free_split(char **tokens){
    for(int i = 0; tokens[i] != NULL; ++i){
        free(tokens[i]);
    }
    free(tokens);
}

int main()
{
    char *s = "Apple,Banana,Orange";
    char **tokens = split(s, ',');
    // while(*tokens != NULL){
    //     printf("%s\n", *tokens);
    //     ++tokens;
    // }
    // tokens移动，无法释放，采用临时指针遍历。
    char **tmp = tokens;
    while(*tmp != NULL){
        printf("%s\n", *tmp);
        ++tmp;
    }
    free_split(tokens);
    return 0;
}