#include<stdio.h>

struct student
{
    int id;
    char name[20];
    int age;
    float score,math, khmer, science, average;
}s[20];

struct teacher
{
    int id;
    char name[20];
    int age;
    float salary;
}t[20];

int main()
{
    int opt;
    int numofstudent = 0;
    int numofteacher = 0;

    FILE * fp;
    fp = fopen("school document.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while(1)
    {
        printf("1.Add Student\n2.Add Teacher\n3.Calculate\n4.Student data\n5.Teacher data\n6.exit\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
            printf("Enter the number of student: ");
            scanf("%d", &numofstudent);

            for(int i = 0; i < numofstudent; i++)
            {
                printf("Enter student id: ");
                scanf("%d", &s[i].id);
                if(s[i].id == 0)
                {
                    break;
                }
                printf("Enter student name: ");
                scanf("%s", s[i].name);
                printf("Enter student age: ");
                scanf("%d", &s[i].age);
            }
            break;
            case 2:
            printf("Enter the number of teacher: ");
            scanf("%d", &numofteacher);

            for(int j = 0; j < numofteacher; j++)
            {
                printf("Enter teacher id: ");
                scanf("%d", &t[j].id);
                if(t[j].id == 0)
                {
                    break;
                }
                printf("Enter teacher name: ");
                scanf("%s", t[j].name);
                printf("Enter teacher age: ");
                scanf("%d", &t[j].age);
                printf("Enter teacher salary: ");
                scanf("%f", &t[j].salary);
            }
            break;
            case 3: 
            for(int i = 0; i < numofstudent; i++)
            {
                printf("Student %d\n", i + 1);
                printf("Enter your math khmer and science score: ");
                scanf("%f %f %f", &s[i].math, &s[i].khmer, &s[i].science);
                s[i].score = s[i].math + s[i].khmer + s[i]. science;
                s[i].average = s[i].score/3;
            }
            break;

            case 4: 
            printf("Student Data: \n");
            for(int i = 0; i < numofstudent; i++)
            {
                printf("Student %d\n", i + 1);
                printf("ID: %d\tName: %s\tAge: %d\tMath: %.2f\tKhmer: %.2f\tScience: %.2f\tScore: %.2f\tAverage: %.2f\n", s[i].id, s[i].name, s[i].age, s[i].math, s[i].khmer, s[i].science, s[i].score, s[i].average);
                fprintf(fp, "ID: %d\tName: %s\tAge: %d\tMath: %.2f\tKhmer: %.2f\tScience: %.2f\tScore: %.2f\tAverage: %.2f\n", s[i].id, s[i].name, s[i].age, s[i].math, s[i].khmer, s[i].science, s[i].score, s[i].average);
            }
            break;
            case 5: 
            printf("Teacher Data: \n");
            for(int j = 0; j < numofteacher; j++)
            {
                printf("Teacher %d\n", j + 1);
                printf("ID: %d\tName: %s\tAge: %d\tSalary: %.2f\n", t[j].id, t[j].name, t[j].age, t[j].salary);
                fprintf(fp, "ID: %d\tName: %s\tAge: %d\tSalary: %.2f\n", t[j].id, t[j].name, t[j].age, t[j].salary);
            }
            break;
            case 6:
                fclose(fp);
                return 0;

            default:
                printf("Invalid option. Please choose again.\n");
        }
    }
    fclose(fp);
    return 0;
}