#include<stdio.h>

int main()
{
    float salary[10],total;
    int age[10];
    char name[10][50];
    int id[10];
    int limit;
    printf("Input limit:");
    scanf("%d",&limit);
    for(int i = 0; i < limit; i++)
    {
        printf("Enter your age: ");
        scanf("%d", &age[i]);
        printf("Enter your name: ");
        scanf("%s", name[i]);
        printf("Enter your id: ");
        scanf("%d", &id[i]);
        printf("Enter Salary:");
        scanf("%f",&salary[i]);
    }
    for(int i = 0; i < limit; i++)
    {
        printf("age: %d\n", age[i]);
        printf("name: %s\n", name[i]);
        printf("id: %d\n", id[i]);
        total +=salary[i];
    }
    printf("The total salary for all employee are:%.2f",total);
}