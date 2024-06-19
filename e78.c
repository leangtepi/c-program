#include<stdio.h>

struct product
{
    int id;
    char name[20];
    float price, discount, total;
}p;

int main()
{
    printf("Enter the id, name and price of the product: ");
    scanf("%d %s %f", &p.id, p.name, &p.price);
    printf("The id, name and price of the product is: %d %s %.2f\n", p.id, p.name, p.price);
    if(p.price >= 30)
    {
        p.discount = 5;
    }else
    {
        p.discount = 0;
    }
    p.total = p.price - p.discount;
    printf("The total is: %.2f\n", p.total);
}