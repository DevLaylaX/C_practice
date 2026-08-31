#include<stdio.h>
#include<stdlib.h>

int **create_matrix(int rows, int cols)
{
    int **matrix = (int**)malloc(rows*sizeof(int*));
    if(matrix == NULL) return NULL;
    for(int i = 0; i < rows; ++i){
        matrix[i] = (int*)malloc(cols*sizeof(int));
        if(matrix[i] == NULL){
            for(int j = 0; j < i; ++j) free(matrix[j]);
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}
void free_matrix(int **matrix, int rows)
{
    for(int i = 0; i < rows; ++i){
        free(matrix[i]);
    }
    free(matrix);
}

int main()
{
    int rows = 3;
    int cols = 4;
    int **mat = create_matrix(rows, cols);

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            mat[i][j] = i*cols + j;
        }
    }
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            printf("%2d\t", mat[i][j]);
        }
        printf("\n");
    }
    free_matrix(mat, rows);

    return 0;
}