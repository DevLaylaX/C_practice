#include<stdio.h>

int isPrime(int x, int KnownPrimes[], int NumberOfKnownPrimes)
{
    int ret = 1;
    for(int i = 0; i < NumberOfKnownPrimes; ++i){
        if(x % KnownPrimes[i] == 0){
            ret = 0;
        }
    }
    return ret;
}
int main()
{
    const int number = 100;
    int Prime[100] = {2};
    int cnt = 1;
    int i = 3;

    while(cnt < number){
        if(isPrime(i, Prime, cnt)){
            Prime[cnt++] = i;
        }
        ++i;
    }
    for(i = 0; i < number; ++i){
        printf("%d", Prime[i]);
        if((i+1) % 5) printf("\t");
        else printf("\n");
    }
    return 0;
}