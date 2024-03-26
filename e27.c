#include<stdio.h>
int main()
{
    int id;
    char Name[20];
    char department[20];
    int work_experience;
    char gender;
    float salary;
    int age;
    int opt;
    A:
    printf("1.Input\n2.Output\n3.retirement case\n");
    scanf("%i", &opt);
    switch(opt)
    {
        case 1:
            printf("Enter id, Name, department, work_experience, gender, salary, age: ");
            scanf("%i %s %s %i %c %f %i", &id, Name, department, &work_experience, &gender, &salary, &age);
            goto A;
            break;
        case 2:
            printf("id = %i\nName = %s\ndepartment = %s\nwork_experience = %i\ngender = %c\nsalary = %f\nage = %i\n", id, Name, department, work_experience, gender, salary, age);
            goto A; 
            break;
        case 3:
            if(gender == 'F')
            {
            if(age >=50)
                {
                    printf("you are eligible for retirement.\n");
                }
                else
                {
                    printf("you are not eligible for retirement.\n");
                }
            }
            if(gender == 'M')
            {
                if(age >=60)
                {
                    printf("you are eligible for retirement.\n");
                }
                else
                {
                    printf("you are not eligible for retirement.\n");
                }
            }
            break;
            default:
                printf("Invalid option.\n");
        }
}
