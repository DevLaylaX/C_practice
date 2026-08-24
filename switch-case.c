#include<stdio.h>

int main()
{
    int type;

    scanf("%d", &type);

    switch(type){
        case 1:
            printf("You selected option 1.\n");
            break;
        case 2:
            printf("You selected option 2.\n");
            break;
        case 3:
            printf("You selected option 3.\n");
            break;
        case 4:
            printf("You selected option 4.\n");
            break;
        default:
            printf("Invalid option selected.\n");
            break;    
        }

    return 0;
}