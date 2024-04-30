#include <stdio.h>

int main() {
    char salon[20];
    int choice;
    int customer;
    float price;
    float total = 0; 

    printf("Enter the salon: ");
    scanf("%s", salon);

    printf("Enter the number of customers: ");
    scanf("%d", &customer);

    for (int i = 1; i <= customer; i++) {
        printf("Customer: %d\n", i);
        printf("Enter your choice: \n");
        printf("1. Hair\n2. Nail\n3. Makeup\n");
        scanf("%d", &choice);

        while(1) {
            switch (choice) {
                case 1:
                    printf("1. $4 - Washing hair\n2. $8 - Washing hair and conditioning\n3. $12 - Coloring hair\n");
                    scanf("%d", &choice);
                    if (choice == 1)
                        price = 4;
                    else if (choice == 2)
                        price = 8;
                    else if (choice == 3)
                        price = 12;
                    break;
                case 2:
                    printf("1. $5 - Coloring\n2. $3 - Removing\n3. $7 - Styling\n");
                    scanf("%d", &choice);
                    if (choice == 1)
                        price = 5;
                    else if (choice == 2)
                        price = 3;
                    else if (choice == 3)
                        price = 7;
                    break;
                case 3:
                    printf("1. $10 - Wedding makeup\n2. $5 - Simple makeup\n3. $8 - Party makeup\n");
                    scanf("%d", &choice);
                    if (choice == 1)
                        price = 10;
                    else if (choice == 2)
                        price = 5;
                    else if (choice == 3)
                        price = 8;
                    break;
                default:
                    printf("Invalid choice\n");
                    continue;
            }
            if(choice == 4) {
                break;
            }
            total += price; 
        }
    }

    printf("Total cost for all customers: $%.2f\n", total);
    return 0;
}
