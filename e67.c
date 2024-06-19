#include <stdio.h>
#include <string.h>

#define MAX_BOOKINGS 20

int main() {
    int opt, id[20], searchid, j = 0;
    char room[MAX_BOOKINGS][20], name[MAX_BOOKINGS][20];
    int phonenumber[MAX_BOOKINGS];
    float price[MAX_BOOKINGS] = {0};

    do {
        printf("1. Input\n2. Display\n3. Search ID\n4. Edit Input\n5. Exit\n");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                do {
                    if (j == MAX_BOOKINGS) {
                        printf("Maximum bookings reached.\n");
                        break;
                    }
                    printf("Enter your name (input 0 to exit): ");
                    scanf("%s", name[j]);
                    if (strcmp(name[j], "0") == 0)
                        break;

                    printf("Enter your id: ");
                    scanf("%d", &id[j]);

                    printf("Enter phone number: ");
                    scanf("%d", &phonenumber[j]);

                    printf("Enter your room choice (A for 1 bed, B for 2 beds, C for 3 beds): ");
                    scanf("%s", room[j]);

                    // Calculate price based on room choice
                    if (strcmp(room[j], "A") == 0)
                        price[j] = 45;
                    else if (strcmp(room[j], "B") == 0)
                        price[j] = 30;
                    else if (strcmp(room[j], "C") == 0)
                        price[j] = 15;

                    j++;
                } while (1);
                break;

            case 2:
                printf("Name\tid\tPhoneNumber\tRoom\tPrice\n");
                for (int i = 0; i < j; i++) {  // Loop should be up to j-1 for valid entries
                    printf("%s\t%d\t%d\t\t%s\t$%.2f\n", name[i], id[i], phonenumber[i], room[i], price[i]);
                }
                break;

            case 3:
                printf("Input search id: ");
                scanf("%d", &searchid);
                for (int i = 0; i < j; i++) {  // Loop should be up to j-1 for valid entries
                    if (searchid == id[i]) {
                        printf("%s\t%d\t%d\t%s\t$%.2f\n", name[i], id[i], phonenumber[i], room[i], price[i]);
                    }
                }
                break;

            case 4:
                printf("Edit search id: ");
                scanf("%d", &searchid);
                for (int i = 0; i < j; i++) {  // Loop should be up to j-1 for valid entries
                    if (searchid == id[i]) {
                        printf("Enter your new name: ");
                        scanf("%s", name[i]);

                        printf("Enter new phone number: ");
                        scanf("%d", &phonenumber[i]);

                        printf("Enter new room choice (A for 1 bed, B for 2 beds, C for 3 beds): ");
                        scanf("%s", room[i]);

                        // Update price based on room choice
                        if (strcmp(room[i], "A") == 0)
                            price[i] = 45;
                        else if (strcmp(room[i], "B") == 0)
                            price[i] = 30;
                        else if (strcmp(room[i], "C") == 0)
                            price[i] = 15;
                    }
                }
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid option\n");
        }
    } while (opt != 5);

    return 0;
}
