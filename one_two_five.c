#include<stdio.h>

int main()
{
    int amount;
    
    printf("Enter the total amount:");
    scanf("%d", &amount);

    for(int one = 1; one < amount*10; ++one){
        for(int two = 1; two*2 < amount*10; ++two){
            for(int five = 1; five*5 < amount*10; ++five){
                if(one + two*2 + five*5 == amount*10){
                    printf("A %d-yuan note consists of %d jiao, %d two-jiao and %d five-jiao notes.\n", 
                        amount, one, two, five);
                    goto exit;
                }
            }
        }
    }
exit:
    return 0;
}