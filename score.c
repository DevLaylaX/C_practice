#include<stdio.h>

int main()
{
    int score = 0;

    printf("请输入成绩：");
    scanf("%d", &score);

    int grade = score / 10;

    switch(grade){
        case 10:
        case 9:
            printf("成绩等级为A\n");
            break;
        case 8:
            printf("成绩等级为B\n");
            break;
        case 7:
            printf("成绩等级为C\n");
            break;
        case 6:
            printf("成绩等级为D\n");
            break;
        default:
            printf("成绩等级为E\n");    
    }

    return 0;
}