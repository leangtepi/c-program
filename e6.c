#include<stdio.h>
int main()
{
    int product_code;
    char Product_Name[20];
    float price;
    float stock_quantity;
    float sales;
    float revenue;
    printf("product_code:");
    scanf("%i", &product_code);
    printf("Product_Name:");
    scanf("%s", Product_Name);
    printf("price:");
    scanf("%f", &price);
    printf("stock_quantity:");
    scanf("%f", &stock_quantity);
    printf("sales:");
    scanf("%f", &sales);
    printf("revenue:");
    scanf("%f", &revenue);
    printf("product_code:%i\n", product_code);
    printf("Name:%s\n", Product_Name);
    printf("price:%f\n", price);
    printf("stock_quatity:%f\n", stock_quantity);
    printf("sales:%f\n", sales);
    printf("revenue:%f\n", revenue);
    return 0;
} 