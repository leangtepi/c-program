#include<stdio.h>

int main()
{
    int age;
    printf("How old are you?");
    scanf("%i", &age);
    if (age < 0)
    {
        printf("Invalid age! Please enter a positive number.\n");
    }else if(age < 18)
    {

        printf("You are a minor.Enjoy your youth!\n");
    }else if (age < 65)
    {
        printf("You are an adult. Welcome to the workforce!\n");
    }else 
    {
        printf("You are senior citizen. Enjoy your retirement!\n");
    }
    return 0;
}