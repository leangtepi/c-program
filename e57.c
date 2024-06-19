#include<stdio.h>

int main() {
    char salon[10][30];
    int costumer[10], choice;
    float price[10] = {0}, total[10] = {0};
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(int i = 1; i <= limit; i++) {
        printf("Enter the salon: ");
        scanf("%s", salon[i]);
        printf("Enter the number of customers: ");
        scanf("%d", &costumer[i]);
        printf("Enter your choice: \n");
        printf("1. hair\n2. nail\n3. make up\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("1. $4 - Washing hair\n2. $8 - Washing hair and conditioning\n3. $12 - Coloring hair\n");
                scanf("%d", &choice);
                if(choice == 1)
                    price[i] = 4;
                else if(choice == 2)
                    price[i] = 8;
                else if(choice == 3)
                    price[i] = 12;
                break;
            case 2: 
                printf("1. $5 - Coloring\n2. $3 - Removing\n3. $7 - Styling\n");
                scanf("%d", &choice);
                if(choice == 1)
                    price[i] = 5;
                else if(choice == 2)
                    price[i] = 3;
                else if(choice == 3)
                    price[i] = 7;
                break;
            case 3:
                printf("1. $10 - Wedding makeup\n2. $5 - Simple makeup\n3. $8 - Party makeup\n");
                scanf("%d", &choice);
                if(choice == 1)
                    price[i] = 10;
                else if(choice == 2)
                    price[i] = 5;
                else if(choice == 3)
                    price[i] = 8;
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
        total[i] += price[i];
    }
    float grandTotal = 0;
    for(int i = 1; i <= limit; i++) 
    {
        printf("Total cost for customer %d: $%.2f\n", i, total[i]);
        grandTotal += total[i];
    }
    printf("Total cost for all customers: $%.2f\n", grandTotal);
    return 0;
}
