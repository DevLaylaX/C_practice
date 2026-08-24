#include<stdio.h>

int main()
{
    const int number = 25;
    int Prime[number];
    int x;
    int i;

    for(int i = 0; i <number; ++i){
        Prime[i] = 1;
    }
    for(x = 2; x < number; ++x){
        if(Prime[x]){
            for(int i = 2; i*x < number; ++i){
                Prime[i*x] = 0;
            }
        }
    }
    for(int i = 2; i < number; ++i){
        if(Prime[i]){
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}