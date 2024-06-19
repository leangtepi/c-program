#include<stdio.h>

int id,age;
char name[20];

void input();
void output();

int main()
{
    input();
    output();
}
void input()
{
    printf("Enter the id, name and age of the student: ");
    scanf("%d %s %d", &id, name, &age);
}

void output()
{
    printf("The id, name and age of the student is: %d %s %d", id, name, age);
}