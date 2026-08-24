#include<stdio.h>

int main()
{
    int sum = 0, cnt = 0;
    int n;
    int number[100];

    printf("Enter numbers to calculate the average (enter -1 to stop):\n");

    scanf("%d", &n);
    while(n != -1){
        number[cnt]=n;
        sum += n;
        ++cnt;
        scanf("%d", &n);
    }
    if(cnt > 0){
        double average = (double)sum / cnt;
        printf("The average of the entered numbers is: %f\n", average);
    }else{
        printf("Void: No valid numbers were entered.\n");
    }
    for(int i = 0; i < cnt; ++i){
        if(number[i] > sum/cnt){
            printf("%d\n", number[i]);
        }
    }

    return 0;
}