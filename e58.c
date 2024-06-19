#include<stdio.h>

int main()
{
    int id[20], age[20];
    char name[20][50], department[20][50];
    float salary[20];
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(int i = 1; i <= limit; i++)
    {
        printf("Enter your id: ");
        scanf("%d", &id[i]);
        printf("Enter your name: ");
        scanf(" %s", name[i]);
        printf("Enter your department: ");
        scanf("%s", department[i]);
        printf("Enter your age: ");
        scanf(" %d", &age[i]);
        printf("Enter salary: ");
        scanf("%f", &salary[i]);
    }
    for(int i = 1; i <= limit; i++)
    {
        printf("Person %d\n",i);
        printf("id: %d\n", id[i]);
        printf("name: %s\n", name[i]);
        printf("department: %s\n", department[i]);
        printf("age: %d\n", age[i]);
        printf("salary: %.2f\n", salary[i]);
        printf("\n");
    }
}