#include<stdio.h>

int main() {
    int ID;
    char company[20];
    float salary;
    char Gender;

    printf("Enter your ID: ");
    scanf("%i", &ID);

    printf("Enter your company: ");
    scanf("%s", company);

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter your Gender: ");
    scanf(" %c", &Gender);

    if (salary >= 500) 
    {
        printf("Your salary won't increase: %.2f\n", salary);
        if (Gender == 'F')
            salary = salary + 50;
    } 
    else 
    {
        salary = salary + 50;
        printf("Your salary will be increased: %.2f\n", salary);
        if (Gender == 'F') 
        {
            salary = salary + 50;
        }
    }

    printf("ID: %i\n", ID);
    printf("Company: %s\n", company);
    printf("Salary: %.2f\n", salary);

    return 0;
}
