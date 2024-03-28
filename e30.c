#include<stdio.h>
int main()
{
    char Name[20];
    float price, total, discount;
    int quantity,choice;
    int opt;
    printf("1.coffee\n2.chocolate frappe\n3.tea");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
        price = 1.5;
        printf("Enter choice,quantity:" );
        break;
        case 2:
        price = 2;
        printf("Enter choice,quantity: ");
        break;
        case 3:
        price = 1;
        break;
        default:
        printf("Invalid option.\n");
    }
    printf("Input Quanlity:");
    scanf("%d",&quantity);
    if(quantity>=3)
    {
        discount = 10;
        total = quantity * price - ((quantity * price)*0.1);
    }
    else
    {
    total = quantity * price;
    }
    printf("Discount :%f",discount);
    printf("total: %f\n", total);
}