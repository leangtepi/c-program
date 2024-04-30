#include <stdio.h>

int main() {
    float total;
    int car, opt1, opt2, parkinghour;
    float anhourprice;

    for (int i = 0; i < 10; i++) {
        printf("1. Big car\n2. Small car\n3. Motobike\n");
        scanf("%d", &opt1);

        switch (opt1) {
            case 1:
                anhourprice = 3;
                break;
            case 2:
                anhourprice = 2;
                break;
            case 3:
                anhourprice = 1;
                break;
            default:
                printf("Invalid option.\n");
                continue; // Go back to the beginning of the loop //not really important it's ok to not put it
        }

        printf("Enter your parking hour: ");
        scanf("%d", &parkinghour);

        printf("1. Park a car\n2. Remove a car\n3. Exit\n");
        scanf("%d", &opt2);

        switch (opt2) {
            case 1:
                if (i < 10) {
                    printf("You can park here.\n");
                } else {
                    printf("The parking lot is full.\n");
                }
                break;
            case 2:
                if (i > 0) {
                    printf("Car removed from parking space.\n");
                } else {
                    printf("The parking lot is already empty.\n");
                }
                break;
            case 3:
                printf("Exit.\n");
                return 0; // End the program
            default:
                printf("Invalid option.\n");
        }

        total = parkinghour * anhourprice;
        printf("Total: %.2f\n", total);
    }
    return 0;
}
