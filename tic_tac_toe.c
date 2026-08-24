#include<stdio.h>

int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX, numOfO;
    int result = -1;

    for(i = 0; i < size; ++i){
        for(j = 0; j < size; ++j){
            scanf("%d", &board[i][j]);
            // 1 represents X and 0 represents O.
        }
    }
    for(i = 0; i < size && result == -1; ++i){
        numOfX = numOfO = 0;
        for(j = 0; j < size; ++j){
            if(board[i][j] == 1){
                ++numOfX;
            }else{
                ++numOfO;
            }
            if(numOfX == size){
                result = 1;
            }else if(numOfO == size){
                result = 0;
            }
        }
    }
    for(j = 0; j < size && result == -1; ++j){
        numOfX = numOfO = 0;
        for(i = 0; i < size; ++i){
            if(board[i][j] == 1){
                ++numOfX;
            }else{
                ++numOfO;
            }
            if(numOfX == size){
                result = 1;
            }else if(numOfO == size){
                result = 0;
            }
        }
    }
    for(i = 0; i < size; ++i){
        numOfX = numOfO = 0;
        if(board[i][i] == 1){
            ++numOfX;
        }else{
            ++numOfO;
        }
        if(numOfX == size){
            result = 1;
        }else if(numOfO == size){
            result = 0;
        }
    }
    for(i = 0; i < size; ++i){
        numOfX = numOfO = 0;
        if(board[i][size-i-1] == 1){
            ++numOfX;
        }else{
            ++numOfO;
        }
        if(numOfX == size){
            result = 1;
        }else if(numOfO == size){
            result = 0;
        }
    }
    if(result == 1){
        printf("X wins!");
    }else if(result == 0){
        printf("O wins!");
    }else{
        printf("Draw.");
    }
    return 0;
}