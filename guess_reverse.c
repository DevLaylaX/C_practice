#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int x;
    int cnt = 0;
    int Finish;
    do{
        scanf("%d", &x);
        ++cnt;
        Finish = 0;
        if( x < 0 ){
            Finish = 1;
        }else if( x < m ){
            printf("Too small\n");
        }else if( x > m ){
            printf("Too big\n");
        }else {
            if( cnt == 1 ){
                printf("Bingo!\n");
            }else if( cnt <= 3 ){
                printf("Lucky You!\n");
            }else if( cnt <= n ){
                printf("Good Guess!\n");
            }
        }
        if( cnt == n && x != m ){
            Finish = 1;
            break;
        }
    }while( x > 0 );
    if( Finish == 1 ){
        printf("Game Over\n");
    }
    
    return 0;
}