#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    char gender;
    int age;
    float salary;
} e[20];
int main()
{
    int opt;
    int numofemployee;

    printf("Enter the number of employees: ");
    scanf("%d", &numofemployee);
    while(1)
    {
    printf("1. Input\n2. Retirement case\n3. Output\n");
    scanf("%d", &opt);

switch (opt)
{
    case 1:
        {
            FILE *fp = fopen("file.txt2.1", "a");
            if (fp == NULL) {
                printf("Failed to open the file.\n");
                return 1; // Exiting with error code
            }
            for(int i = 0; i < numofemployee; i++)
            {
                printf("Enter employee id: ");
                scanf("%d", &e[i].id);
                printf("Enter employee name: ");
                scanf("%s", e[i].name);
                printf("Enter employee gender: ");
                scanf(" %c", &e[i].gender);
                printf("Enter employee age: ");
                scanf("%d", &e[i].age);
                printf("Enter employee salary: ");
                scanf("%f", &e[i].salary);

                fprintf(fp, "Name: %s\nID: %d\nGender: %c\nAge: %d\nSalary: %.2f\n\n", e[i].name, e[i].id, e[i].gender, e[i].age, e[i].salary);
            }
            fclose(fp);
    }
    break;
case 2:
    for(int i = 0; i < numofemployee; i++)
    {
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
    }
    break;
case 3: 
    printf("Output option cannot be used with 'w' mode. Please select '1' or '2'.\n");
    break;
default:
    printf("Invalid option.\n");
} 
}
return 0;
} 