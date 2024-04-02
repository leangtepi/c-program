#include<stdio.h>
int main()
{
    char Name[20];
    int opt;
    float price;
    char seat;
    float seatprice;
    float total;
    printf("Enter your name: ");
    scanf("%s", Name);
    printf("1.cambodia to korea\n2.cambodia to thailand\n3.cambodia to england");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
        price = 100;
        break;
        case 2:
        price = 50;
        break;
        case 3:
        price = 150;
        break;
    }
    printf("Enter your seat: ");
    scanf(" %c", &seat);
    switch(seat)
    {
        case 'a':
        case 'A':
        seatprice = 200;
        break;
        case 'b':
        case 'B':
        seatprice = 100;
        break;
        case 'c':
        case 'C':
        seatprice = 50;
        break;
    }
    total = seatprice + price;
    printf("Enter total: %f",total);
}