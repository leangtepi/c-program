#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%i", &age);
    if(age >= 18 || age <= 65)
    {
        printf("You are eligible for voting");
    }
    else if(age > 65)
    {
        printf("You are not eligible for voting");
    }
}