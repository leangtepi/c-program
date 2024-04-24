#include<stdio.h>
#include<stdlib.h>

int main() {
    int age;
    int ticket;
    float price = 0;
    float total = 0;
    float discount = 0;
    int opt;

    do {
        printf("1. Input\n2. Output\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &opt); 

        switch(opt) 
        {
            case 1:
                printf("Enter your age: ");
                scanf("%d", &age);
                printf("Enter number of tickets: ");
                scanf("%d", &ticket);
                break;
            case 2:
                printf("Age: %d\nTickets: %d\n", age, ticket);
                break;
            case 3:
                printf("Exiting the program.\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                continue;
        }

        if (age >= 30) 
        {
            printf("Elderly section\n");
            price = 15;
        } else if (age >= 15 && age <= 20) 
        {
            printf("Adult section\n");
            price = 10;
        } else 
        {
            printf("Kid section\n");
            price = 5;
        }

        total = price * ticket;

        if (ticket >= 5) 
        {
            discount = total * 0.1; // 10% discount
            total -= discount;
        }
        printf("Total: %.2f\n", total);
        printf("Discount: %.2f\n", discount);
    } while(1);

    return 0;
}
