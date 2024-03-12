#include<stdio.h>
int main()
{
    int ID, Age;
    char Name[20];
    char school[20];
    char grade;
    printf("Enter your ID:");
    scanf("%i", &ID);
    printf("Enter your Age:");
    scanf("%i", &Age);
    printf("Enter your Name:");
    scanf(" %s", Name);
    printf("Enter your school:");
    scanf("%s", school);
    printf("Enter your grade:");
    scanf(" %c", &grade);
    if(grade == 'A')
    {
        printf("you are acceptable in our school: %s", school);
    }
    else
    {
        printf("your are not acceptable in our school:  %s", school);
    }

}