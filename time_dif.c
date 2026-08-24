#include<stdio.h>

int main()
{ 
	printf("请输入两个时间，如输入的时间为10 30和12 20，则表示10点30分和12点20分\n");
	
	int h1,min1;
	int h2,min2;
	
	scanf("%d %d", &h1, &min1);
	scanf("%d %d", &h2, &min2);
	
	int difh,difm;
	difh = ((h1 - h2)* 60 + min1 - min2)/60;
	difm = ((h1 - h2)* 60 + min1 - min2)%60;

	if(difh < 0){
		difh = -difh;
		difm = -difm;
	}
	
	
	printf("两时间之差为%d %d", difh, difm );
    
	return 0;
}


	

