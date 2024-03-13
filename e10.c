#include<stdio.h>
int main()
{
    int ID;
    char company[20];
    float salary;
    printf("Enter your ID:");
    scanf("%i", &ID);
    printf("Enter your company:");
    scanf("%s", company);
    printf("Enter your salary:");
    scanf("%f", &salary);
    if(salary >= 500)
    {

        printf("your salary won't increase:%f", salary);

    }
    else
    {
        salary = salary + 50;
        printf("your salary will be increase:%f", salary);

    }
    printf("ID:%i\n", &ID);
    printf("%company:%s\n", company);
    printf("salary:%f\n", salary);
}