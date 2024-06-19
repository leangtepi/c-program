#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    char name[20];
    int age;
}s[50];

struct teacher
{
    int id;
    char name[20];
    int age;
}t[50];

int studentCount = 0;
int teacherCount = 0;

void input();
void output();
void edit();
void search();
void delete();

int main()
{
    while(1)
    {
        int opt;
        printf("1.Input\n2.Output\n3.edit\n4.search\n5.delete\n6.exit");
        scanf("%d",&opt);
        switch(opt)
        {   
        case 1:
        input();
        break;
        case 2:
        output();
        break;
        case 3:
        edit();
        break;
        case 4:
        search();
        break;
        case 5:
        delete();
        break;
        case 6:
        exit(0);
        }
    }
    return 0;
}

void input()
{
    while(1)
    {
        int opt;
        printf("1. Student\n2. Teacher\n3. exit\n");
        scanf("%d", &opt);
        
        if(opt == 3)
        {
            printf("Exiting...\n");
            exit(0);
        }

        if(opt == 1)
        {
            printf("Input student id (0 to exit): ");
            scanf("%d", &s[studentCount].id);
            if(s[studentCount].id == 0)
            {
                break;
            }
            printf("Input student name: ");
            scanf("%s", s[studentCount].name);
            printf("Input student age: ");
            scanf("%d", &s[studentCount].age);
            studentCount++;
        }
        else if(opt == 2)
        {
            printf("Input teacher id (0 to exit): ");
            scanf("%d", &t[teacherCount].id);
            if(t[teacherCount].id == 0)
            {
                break;
            }
            printf("Input teacher name: ");
            scanf("%s", t[teacherCount].name);
            printf("Input teacher age: ");
            scanf("%d", &t[teacherCount].age);
            teacherCount++;
        }
        else
        {
            printf("Invalid option. Please try again.\n");
        }
    }
}
void output()
{
    printf("The details of the students: \n");
    for(int j = 0; j < studentCount; j++)
    {
        printf("%d\t%s\t%d\n", s[j].id, s[j].name, s[j].age);
    }

    printf("The details of the teachers: \n");
    for(int j = 0; j < teacherCount; j++)
    {
        printf("%d\t%s\t%d\n", t[j].id, t[j].name, t[j].age);
    }
}
void edit()
{
    int searchid;
    int opt;
    printf("1.Student\n2.Teacher");
    scanf("%d",&opt);
    printf("edit search id: ");
    scanf("%d", &searchid);
    if(opt == 1)
    {
        for (int j = 0 ; j < studentCount; j++)
        {
            if(searchid == s[j].id)
            {
                printf("Input student id (0 to exit): ");
                scanf("%d", &s[j].id);
                printf("Input student name: ");
                scanf("%s", s[j].name);
                printf("Input student age: ");
                scanf("%d", &s[j].age);
            }
        }
    }
    else
    {
        for(int j = 0; j < teacherCount; j++)
        {
            if(searchid == t[j].id)
            {
                printf("Input teacher id (0 to exit): ");
                scanf("%d", &t[j].id);
                printf("Input teacher name: ");
                scanf("%s", t[j].name);
                printf("Input teacher age: ");
                scanf("%d", &t[j].age);
            }
        }
    }
}
void search()
{
    int searchid;
    int opt;
    printf("1.student\n2.output\n");
    scanf("%d", &opt);
    printf("input search id: ");
    scanf("%d", &searchid);
    if(opt == 1)
    {
        for (int j = 0 ; j < studentCount; j++)
        {
            if(searchid == s[j].id)
            {
                printf("%d\t%s\t%d\n", s[j].id, s[j].name, s[j].age);
            }
        }
    }else
    {
        for(int j = 0; j < teacherCount; j++)
        {
            if(searchid == t[j].id)
            {
                printf("%d\t%s\t%d\n", t[j].id, t[j].name, t[j].age);
            }
        }
    }
}
void delete()
{
    int searchid;
    int opt;
    printf("1.student\n2.output\n");
    scanf("%d", &opt);
    printf("input search id: ");
    scanf("%d", &searchid);
    if(opt == 1)
    {
        for (int j = 0 ; j < studentCount; j++)
        {
            if(searchid == s[j].id)
            {
                for(int k = j; k < studentCount - 1; k++)
                {
                    s[k] = s[k+1];
                }
                studentCount--;
                printf("student with id %d deleted successfully.\n", searchid);
                return;
            }
            printf("student with id %d not found.\n", searchid);
        }
    }else
    {
        for(int j = 0; j < teacherCount; j++)
        {
            if(searchid == t[j].id)
            {
                for(int k = j; k < teacherCount - 1; k++)
                {
                    t[k] = t[k+1];
                }
                studentCount--;
                printf("teacher with id %d deleted successfully.\n", searchid);
                return;
            }
           printf("teacher with id %d not found.\n", searchid);
        }
    }
}  
