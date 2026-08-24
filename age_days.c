#include<stdio.h>

int main()
{
	int age,days;
	
	age = 0;
	
	printf("How old are you?\n");
	scanf("%d",&age);
	
	days = 365 * age;
	
	printf("I see. There are %d days.\n",days);
	
	return 0;
	
}
