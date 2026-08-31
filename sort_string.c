#include<stdio.h>
#include<string.h>

void sort_string(char **arr, int cnt)
{
    for(int i = 0; i < cnt - 1; ++i){
        for(int j = 0; j < cnt - 1 - i; ++j){
            if(strcmp(arr[j], arr[j + 1]) > 0){
                char *tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j +  1] = tmp;
            }
        }
    }
}

int main()
{
    char *words[] = {"banana", "apple", "cherry", "date"};
    int cnt = sizeof(words)/sizeof(words[0]);

    for(int i = 0; i < cnt; ++i){
        printf("%s\t", words[i]);
    }
    printf("\n");

    sort_string(words, cnt);
    
    for(int i = 0; i < cnt; ++i){
        printf("%s\t", words[i]);
    }
    printf("\n");

    return 0;
}