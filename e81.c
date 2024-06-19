#include<stdio.h>
#include<string.h>

//Array in structure
struct product
{
    int id[50];
    char name[50][50];
    float price[50];
}products;

void input();
void output();
void search();
void edit();
void delete();

int main()
{
    int opt;
    while(1)
    {
        printf("1.input\n2.output\n3.search\n4.edit\n5.delete\n");
        scanf("%d", &opt);
        switch (opt)
        {
            case 1:
            input();
            break;
            case 2:
            output();
            break;
            case 3:
            search();
            break;
            case 4:
            edit();
            break;
            case 5:
            delete();
        }
    }
}
void input()
{
    for(int i = 1; i <= 5; i++)
    {
        printf("Input ID:");
        scanf("%d",&products.id[i]);
        printf("Input Name:");
        scanf("%s", products.name[i]);
        printf("Input Price: ");
        scanf("%f",&products.price[i]);
    }
}
void output()
{
    for(int i = 1; i <= 5; i++)
    {
        printf("The details of the product: \n");
        printf("%d %s %.2f\n", products.id[i], products.name[i], products.price[i]);
    }
}
void search()
{
    int searchid;
    printf("input search id: ");
    scanf("%d", &searchid);
    for(int i = 1; i <= 5; i++)
    {
        if(searchid == products.id[i])
        {
            printf("%d %s %.2f\n", products.id[i], products.name[i], products.price[i]);
        }
    }
}
void edit()
{
    int searchid;
    printf("input edit id: ");
    scanf("%d", &searchid);
    for(int i = 1; i <= 5; i++)
    {
        if(searchid == products.id[i])
        {
        printf("Input ID:");
        scanf("%d",&products.id[i]);
        printf("Input Name:");
        scanf("%s", products.name[i]);
        printf("Input Price: ");
        scanf("%f",&products.price[i]);
        }
    }
}
void delete()
{
    int searchid;
    printf("input delete id: ");
    scanf("%d", &searchid);
    for(int i = 0; i <= 5; i++)
    {
        if(searchid == products.id[i])
        {
            for(int k = i; k < 4; k++)
            {
                products.id[k] = products.id[k+1];
                strcpy(products.name[k], products.name[k+1]);
                products.price[k] = products.price[k+1];
            }
            printf("The product id %d was deleted successfully.\n", searchid);
            i--; 
            return;
        }
    }
    printf("The product with id %d not found.\n", searchid);
}