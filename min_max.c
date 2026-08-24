#include<stdio.h>

void min_max( int a[], int len, int* min, int* max)
{
    *min = *max = a[0];
    for(int i = 0; i < len; ++i){
        if(a[i] < *min){
            *min = a[i];
        }
        if(a[i] > *max){
            *max = a [i];
        }
    }
}
int main()
{
    int a[] = {1,2,3,4,6,789,843,7,3,70,34,325,46};
    int min, max;
    min_max(a, sizeof(a)/sizeof(a[0]), &min, &max);
    printf("min=%d, max=%d", min, max);

    return 0;
}