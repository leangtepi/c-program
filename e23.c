#include<stdio.h>
int main()
{
    int id;
    float salary;
    char name[20];
    int opt;
    A:
    printf("1.Input data\n2.Display data\n3.Exit\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            printf("Enter id, name and salary\n");
            scanf("%d%s%f", &id, name, &salary);
            goto A;
            break;
        case 2:
            printf("ID = %d\nName = %s\nSalary = %f\n", id, name, salary);
            goto A;
            break;
        case 3:
            break;
        default:
            printf("Invalid option\n");
    }
}