#include<stdio.h>
#include<stdbool.h>

struct date{
    int month;
    int day;
    int year;
};

bool isLeap(struct date d);
int numberOfDays(struct date d);

int main()
{
    struct date today, tommorrow;

    printf("Enter today's date (mm dd yyyy):\n");
    scanf("%d %d %d", &today.month, &today.day, &today.year);

    if(today.day != numberOfDays(today)){
        tommorrow.day = today.day + 1;
        tommorrow.month = today.month;
        tommorrow.year = today.year; 
    }else if(today.month == 12){
        tommorrow.day = 1;
        tommorrow.month = 1;
        tommorrow.year = today.year + 1;    
    }else{
        tommorrow.day = 1;
        tommorrow.month = today.month + 1;
        tommorrow.year = today.year;
    }

    printf("Tommorrow's date is %d-%d-%d.\n", tommorrow.day, tommorrow.month, tommorrow.year);

    return 0;
}

int numberOfDays(struct date d)
{
    int days;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(d.month == 2 && isLeap(d)) 
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

bool isLeap(struct date d)
{
    bool leap = false;
    if((d.year % 4 == 0 && d.year % 100 != 0) ||d.year % 400 == 0)
        leap = true;

    return leap;
}