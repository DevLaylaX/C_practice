#include<stdio.h>
#include<stdlib.h>

int *create_vector(int capacity)
{
    int *arr = (int*)malloc(capacity*sizeof(int));
    if(arr == NULL){
        printf("False.\n");
        exit(1);
    }
    return arr;
}
void push_back(int **arr, int *size, int *capacity, int value)
{
    if(*size >= *capacity){
        *capacity *= 2;
        int *tmp = (int*)realloc(*arr,*capacity * sizeof(int));
        
        if(tmp == NULL){
            printf("False.\n");
            exit(1);
        }
        *arr = tmp;
        printf("Successful, new capacity:%d\n", *capacity);
        
    }
    (*arr)[*size] = value;
    ++ *size;
}
void free_vector(int *arr)
{
    free(arr);
}

int main()
{
    int capacity = 2;
    int *arr = create_vector(capacity);
    int size = 0;

    for(int i = 0; i <= 5; ++i){
        push_back(&arr, &size, &capacity, i);
        printf("Add %d, size now:%d\n", i, size);
    }
    for(int i = 0; i < size; ++i){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    free_vector(arr);

    return 0;
}