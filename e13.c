#include<stdio.h>

int main()
{
    int hours_parked;
    float fine = 0.0;
    printf("Enter the number of hours parked:");
    scanf("%d", &hours_parked);
    if(hours_parked <= 2){
        printf("No parking ticket. Enjoy your stay!\n");
    }else if(hours_parked <= 5){
        fine = 15.0;
    }else if (hours_parked <= 10){
        fine = 30.0;
    }else{
        fine = 50.0;
    }
    if(fine > 0){
        printf("You have been fine $%.2f for parking over the allowed time.\n", fine);
    }
}