#include<stdio.h>

int main()
{   
    const int number = 10;
    int x;
    int cnt[number] = {0};

    // for(int i = 0; i < number; ++i){
    //     cnt[i] = 0;
    // }
    scanf("%d", &x);

    while(x != -1){
        if(x >= 0 && x <= 9){
            ++cnt[x];
        }
        scanf("%d", &x);
    }
    for(int i = 0; i < number; ++i){
        printf("%d:%d\n", i, cnt[i]);
    }
    return 0;
}