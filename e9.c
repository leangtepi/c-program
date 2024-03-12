#include<stdio.h>
int main()
{
    int ID, Age;
    char Name[20];
    char Gender;
    printf("Enter your ID: ");
    scanf("%i", &ID);
    printf("Enter your Name: ");
    scanf("%s", Name);
    printf("Enter your Gender: ");
    scanf(" %c", &Gender);
    printf("Enter your Age: ");
    scanf(" %i", &Age);
    if(Age >= 18)
    {
        printf("ID :%d",ID);
        printf("Name :%s",Name);
        printf("Gender: %c",Gender);
        printf("You are enligiable to vote");
    }
    else
    {
        printf("ID :%d",ID);
        printf("Name :%s",Name);
        printf("Gender: %c",Gender);
        printf("You are not enligiable to vote");
    }
}