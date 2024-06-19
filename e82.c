#include<stdio.h>

struct teacher
{
    int id;
    char name[50];
    int age;
}t[50];

struct student
{
    int id;
    char name[50];
    int age;
    int teacherid;
}s[50];

int teacherCount = 0;
int studentCount = 0;

void input();
void output();
void search();
void classroom();

int main()
{
    int opt;
    while(1)
    {
        printf("1.input\n2.output\n3.search\n4.classroom\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
            input();
            break;
            case 2:
            output();
            break;
            case 3:
            search();
            break;
            case 4:
            classroom();
        }
    }
}
void input()
{
    while(1)
    {
    int opt;
    printf("1.teacher\n2.student\n");
    scanf("%d", &opt);
    if(opt == 1)
    {
        printf("input id(0 to exit): ");
        scanf("%d", &t[teacherCount].id);
        if(t[teacherCount].id == 0)
        {
            break;
        }
        printf("input your name: ");
        scanf("%s", t[teacherCount].name);
        printf("input your age: ");
        scanf("%d", &t[teacherCount].age);
        teacherCount++;
    }
    else if(opt == 2)
    {
        printf("input id(0 to exit): ");
        scanf("%d", &s[studentCount].id);
        if(s[studentCount].id == 0)
        {
            break;
        }
        printf("input your name: ");
        scanf("%s", s[studentCount].name);
        printf("input your age: ");
        scanf("%d", &s[studentCount].age);
        printf("input teacher id: ");
        scanf("%d", &s[studentCount].teacherid);
        studentCount++;
    }
    }
}
void output()
{
    printf("The details of the teacher: \n");
    for(int j = 0; j < teacherCount ; j++)
    {
        printf("%d %s %d\n", t[j].id, t[j].name, t[j].age);
    }
    printf("The details of the student: \n");
    for(int j = 0; j < studentCount; j++)
    {
        printf("%d %s %d %d\n", s[j].id, s[j].name, s[j].age, s[j].teacherid);
    }
}
void search()
{
    int searchid;
    int opt;
    printf("1.teacher\n2.student\n");
    scanf("%d", &opt);
    printf("input search id: ");
    scanf("%d", &searchid);
    if(opt == 1)
    {
        for(int j = 0; j < teacherCount; j++)
        {
            if(searchid == t[j].id)
            {
                printf("%d %s %d\n", t[j].id, t[j].name, t[j].age);
            }
        }
    }
    else if(opt == 2)
    {
        for(int j = 0; j < studentCount; j++)
        {
            if(searchid == s[j].id)
            {
                printf("%d %s %d %d\n", s[j].id, s[j].name, s[j].age, s[j].teacherid);  
            }
        }
    }
}
void classroom()
{
    for(int i = 0; i < teacherCount; i++)
    {
        printf("Teacher Name: %s\n", t[i].name);
        printf("ID\tName\tAge\tTeacher ID\n");
        for(int j = 0; j < studentCount; j++)
        {
            if(s[j].teacherid == t[i].id)
            {
                printf("%d\t%s\t%d\t%d\n", s[j].id, s[j].name, s[j].age, s[j].teacherid);  
            }
        }
    }
}