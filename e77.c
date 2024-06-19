#include<stdio.h>

struct student
{
    int id;
    char name[20];
    int age;
}s;

int main()
{
    printf("Enter the id, name, and age of the students: ");
    scanf("%d %s %d", &s.id, s.name, &s.age);
    printf("The id, name and age of the student is: %d %s %d", s.id, s.name, s.age);
}