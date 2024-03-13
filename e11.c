#include<stdio.h>
int main()
{
    char productname[20];
    int cost;
    int product_used; 
    printf("productname:");
    scanf("%s", productname);
    printf("cost:");
    scanf("%i", &cost);
    printf("product_used:");
    scanf("%s", product_used);
    if(cost >= 15)
    {
        printf("the price won't be increase:");
        product_used = 30;
    }
    else
    {
        printf("the price will be increase:");
        product_used = 20;
    }
    printf("productname:%s\n", productname);
    printf("cost:%i\n", cost);
    printf("product_used:%i\n", product_used);
    return 0;
}