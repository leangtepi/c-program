#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    char gender;
    int age;
    float salary;
}e[20];

int main()
{
    int opt;
    int numofemployee = 0;
    FILE * fp;

    fp = fopen("file2.txt", "w");

    printf("Enter the number of employee: ");
    scanf("%d", &numofemployee);

    while(1)
    {
    printf("1.input\n2.retirement case\n3.output\n");
    scanf("%d", &opt);
    switch (opt)
    {
        case 1:
        for(int i = 0; i < numofemployee; i++)
        {
            printf("Enter employee id: ");
            scanf("%d", &e[i].id);
            if(e[i].id == 0)
            {
                break;
            }
            printf("Enter employee name: ");
            scanf("%s", e[i].name);
            printf("Enter employee gender: ");
            scanf(" %c", &e[i].gender);
            printf("Enter employee age: ");
            scanf("%d", &e[i].age);
            printf("Enter employee salary: ");
            scanf("%f", &e[i].salary);
        }
        break;
        case 2:
        for(int i = 0; i < numofemployee; i++)
        {
            printf("Status: \n");
            if(e[i].gender == 'F')
            {
                if(e[i].age >= 50)
                {
                    printf("You are eligible for retirement.\n");
                }
                else
                {
                    printf("You are not eligible for retirement.\n");
                }
            }
            else if(e[i].gender == 'M')
            {
                if(e[i].age >= 60)
                {
                    printf("You are eligible for retirement.\n");
                }
                else
                {
                    printf("You are not eligible for retirement.\n");
                }
            }
            else
            {
                printf("Gender not recognized.\n");
            }
        }
        break;
        case 3: 
        printf("Employee details: \n");
        for(int i = 0; i < numofemployee; i++)
        {
            printf("Name: %s\nID: %d\nGender: %c\nAge: %d\nSalary: %.2f\n", e[i].name, e[i].id, e[i].gender, e[i].age, e[i].salary);
            fprintf(fp, "Name: %s\nID: %d\nGender: %c\nAge: %d\nSalary: %.2f\n", e[i].name, e[i].id, e[i].gender, e[i].age, e[i].salary);
        }
    }
    }
    
    fclose(fp);
    return 0;
}