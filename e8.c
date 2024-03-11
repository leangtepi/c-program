#include<stdio.h>
int main()
{
    char firstname[20],lastname[20];
    int age;
    int year=2024;
    int birth_year;
    float height;
    char address[100];
    printf("Enter your firstname, lastname:");
    scanf("%s %s", firstname, lastname);
    printf("age:");
    scanf(" %i", &age);
    birth_year = year - age;
    printf("height:");
    scanf("%f", &height);
    printf("address:");
    scanf(" %s", address);
    printf("\n");
    printf("firstname, last name:%s %s\n", firstname, lastname);
    printf("age:%i\n", age);
    printf("height:%f\n", height);
    printf("address:%s\n", address);
    printf("Year of birth: %i",birth_year);
    return 0;
}