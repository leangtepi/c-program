#include <stdio.h>

int main() 
{
    char salon[20];
    int choice;
    int customer;
    float price;
    float total = 0; 
    printf("Enter the salon: ");
    scanf("%s", salon);
    printf("Enter the number of customers: ");
    scanf("%d", &customer);
    for (int i = 1; i <= customer; i++) 
    {
        printf("Customer: %d\n", i);
        while(1) 
        {
            printf("Enter your choice: \n");
            printf("1. Hair\n2. Nail\n3. Makeup\n");
            scanf("%d", &choice);

            switch (choice) 
            
            break;
        }
        total += price; 
    }
    printf("Total cost for all customers: $%.2f\n", total);
    return 0;
}
