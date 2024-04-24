#include<stdio.h>

int main()
{
    int limit;
    char drivername[20];
    char busmodel[20];
    float distance;
    float price;
    int passenger;
    float totalfee;
    float totalprice;
    float gasprice = 1.5;
    float distanceCost;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(int i = 1; i <= limit; i++)
    {
        printf("%d", i);
        printf("Enter the driver name: ");
        scanf("%s", &drivername);
        printf("Enter bus model: ");
        scanf("%s", &busmodel);
        printf("Enter your distance: ");
        scanf("%f", &distance);
        printf("Enter the price: ");
        scanf("%f", &price);
        printf("Enter the passenger: ");
        scanf("%i", &passenger);
        totalfee = passenger * price;
        printf("total:%.2f\n", totalfee);
        distanceCost = (distance/5) * gasprice;
        printf("distance cost: %.2f\n",distanceCost);     
        totalprice = totalfee - distanceCost;
        if(totalprice >=0)
        {
            printf("Net positive\n");
        }
        else
        {
            printf("Net negative\n");

        }
        printf("Total: %.2f",totalprice);
    }
}