#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int length_of_day; 
    float price;
    int used; 
    float total;
    float discount;
    int car;
    
    while(1)
    {
        int opt;
        printf("1. Input\n2. Output\n3. Exit\n"); 
        scanf("%d", &opt);
        
        switch(opt) 
        {
            case 1: 
                printf("1. Lux\n2. Toyota 4x4\n3. Ford pickup\n");
                printf("Enter car type: ");
                scanf("%d", &car);
                switch(car)
                {
                    case 1:
                    price = 35;
                    break;
                    case 2:
                    price = 40;
                    break;
                    case 3:
                    price = 50;
                    break;
                    default:
                    printf("There no such option");
                }
                printf("input the total day of renting: ");
                scanf("%d",&length_of_day);
                if(length_of_day >=10)
                {
                    discount = 10;
                }
                else
                {
                    discount = 0;
                }
                total = length_of_day * price;
                break;
            case 2:
                // Output functionality will be implemented here
                printf("Output option selected.\n");
                printf("length_of_day = %d\nprice = %.2f\ntotal = %.2f\ndiscount = %.2f\n", length_of_day, price, total, discount);
                break;

            case 3:
                printf("Exiting the program.\n");
                exit(0);
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }
    
    return 0;
}
