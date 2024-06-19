#include<stdio.h>
#include<stdlib.h>

int id, i;
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
    printf("Enter id and name of the student: ");
    scanf("%d %s", &id, name);
}
void output()
{
    printf("The id and name of the student is: %d %s", id, name);
}