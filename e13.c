#include<stdio.h>
int main()
{
    int hour_parked;
    int fine = 0.0;
    printf("hour_parked:");
    scanf("%i", &hour_parked);
    if (hour_parked <=2)
    {
        printf("you are not fine.Enjoy your stay.\n");
    }else if(hour_parked <=5)
    {
        fine = 10;
        printf("you have been fine for parking over the allow time.\n");
    }else if(hour_parked <=8)
    {
        printf("you have been fine for parking over the allow time.\n");
        fine = 15;
    }else 
    {
        printf("you have been fine for parking over the allow time.\n");
        fine = 20;
    }
    printf("the fines is gonna be %d",fine);
}