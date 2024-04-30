#include<stdio.h>

int main()
{
    char coffeeshop[20];
    int table, chair, people, openhour, opt;
    float chairprice, anhourtotal, sumtotal;
    while(1)
    {
        printf("1.input\n2.output\n3.exit\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: 
            printf("Enter the coffeeshop: ");
            scanf("%s", coffeeshop);
            printf("Enter open hour: ");
            scanf("%d", &openhour);
            printf("Enter the table: ");
            scanf("%d", &table);
            printf("Enter the amount of people in one hour: ");
            scanf("%d", &people);
            chair = table * 6;
            printf("chair = %d\n", chair);
            chairprice = 1;
            anhourtotal = people * chairprice;
            printf("total = %.2f\n", anhourtotal);
            sumtotal = openhour * anhourtotal;
            printf("sumtotal = %.2f\n", sumtotal);
            break;
            case 2:
            printf("coffeeshop = %s\ntable = %d\npeople = %d\nchair = %d\nanhourtotal = %.2f\nsumtotal = %.2f\n", coffeeshop, table, people, chair, anhourtotal, sumtotal);
            break;
            case 3:
            printf("Exit.\n");
            return 0;
            default:
            printf("invalid option.\n");
        }
    }
}