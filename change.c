#include<stdio.h>

int main()
{
	int amount = 0;
	int price = 0;
	
    printf("请输入金额（元）：");
	scanf("%d", &price);
	
	printf("请输入票面（元）：");
	scanf("%d", &amount);
	
	int change = amount - price;

	if ( amount >= price ) {
	    printf("找您%d元。\n",change);
    }else {
		printf("金额不足，无法购买。\n");
	}
	return 0;
}


