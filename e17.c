#include<stdio.h>
int main()
{
    int ID;
    char Name[20];
    char Gender;
    int YearOfBirth;
    int Age;
    float retirement_money;
    float salary;
    float Money_Package;

    printf("Enter your ID:");
    scanf("%i", &ID);
    printf("Enter your Name:");
    scanf(" %s", Name);
    printf("Enter your Gender:");
    scanf(" %c", &Gender);
    printf("Enter your salary:");
    scanf("%f", &salary);
    printf("Year of birth:");
    scanf("%i", &YearOfBirth);
    // Calculate age
    Age = 2024 - YearOfBirth;

    if (Gender == 'F') {
        if (Age >= 50) {
            printf("You're eligible for retirement.\n");
            retirement_money = salary / 2;
            Age = 80 - Age;
            Money_Package = Age * retirement_money;
        }
        else {
            printf("You're not eligible for retirement.\n");
        }
    }
    else if (Gender == 'M') {
        if (Age >= 60) {
            printf("You're eligible for retirement.\n");
            retirement_money = salary / 2;
            Age = 80 - Age;
            Money_Package = Age * retirement_money;
        }
        else {
            printf("You're not eligible for retirement.\n");
        }
    }

    printf("ID: %i\n", ID);
    printf("Name: %s\n", Name);
    printf("Gender: %c\n", Gender);
    printf("Year of birth: %i\n", YearOfBirth);
    printf("Age: %i\n", Age);
    printf("Retirement money: %f\n", retirement_money);
    printf("Salary: %f\n", salary);
    printf("Money Package: %f\n", Money_Package); 

    return 0;
}
