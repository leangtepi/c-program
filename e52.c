#include<stdio.h>

int main() 
{
    int limit;
    int carmaximum;
    float total;
    int car, opt1, opt2, parkinghour;
    float anhourprice, parkingtotal;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(int i = 1; i <= limit; i++)
    {
        printf("1. Big car\n2. Small car\n3. Motobike\n");
        scanf("%d", &opt1);
        switch(opt1)
        {
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
                continue; 
        }
        printf("Enter your parking hour: ");
        scanf("%d", &parkinghour);
        total = parkinghour * anhourprice;
        printf("Total: %.2f\n", total);
        if(parkinghour > 24)
        {
            parkingtotal = (total * 3) + total;
        }
        else if(parkinghour >= 12 && parkinghour <= 24)
        {
            parkingtotal = (total * 1.5) + total;
        }
        else if (parkinghour >= 1 && parkinghour <= 3)
        {
            parkingtotal = (total * 0.1) + total;
        }
        printf("parkingtotal: %.2f\n", parkingtotal);
        printf("1. Park a car\n2. Remove a car\n3. Exit\n");
        scanf("%d", &opt2);

        switch(opt2) {
            case 1:
                printf("Enter the car maximum: ");
                scanf("%d", &carmaximum);
                if(carmaximum < 10) {
                    printf("You can park here.\n");
                } else {
                    printf("The parking lot is full.\n");
                }
                break;
            case 2:
                if(carmaximum == 10) {
                    printf("The parking lot is full.\n");
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
    }
}