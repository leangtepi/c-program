#include <stdio.h>

struct student 
{
    int id;
    char name[50];
    float grade;
}s[20];

int searchid;

int main() 
{
    int numofstudent = 0;
    while (1) 
    {
        int opt;
        printf("1. Input\n2. Process\n3.search\n4.edit\n5.delete\n6.Output\n");
        scanf("%d", &opt);

        switch (opt) 
        {
            case 1:
                printf("Enter the number of students: ");
                scanf("%d", &numofstudent);

                for (int i = 0; i < numofstudent; i++) 
                {
                    printf("Enter student id: ");
                    scanf("%d", &s[i].id);
                    printf("Enter student name and grade: \n");
                    scanf("%s %f", s[i].name, &s[i].grade);
                }
                break;

            case 2:
                printf("The details of the students: \n");
                float totalgrade = 0;
                float averagegrade;

                for (int i = 0; i < numofstudent; i++) 
                {
                    printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].grade);
                    totalgrade += s[i].grade;
                }

                averagegrade = totalgrade / numofstudent;
                break;
            
            case 3:
            printf("Enter search id: ");
            scanf("%d", &searchid);
            for (int i = 0; i < numofstudent; i++) 
            {
                if(searchid == s[i].id)
                {
                    printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].grade);
                    printf("Average Grade: %.2f\n", averagegrade);
                }
            }
            break;

            case 4:
            printf("edit search id: ");
            scanf("%d", &searchid);
            for (int i = 0; i < numofstudent; i++) 
            {
                if(searchid == s[i].id)
                {
                    printf("Enter student id: ");
                    scanf("%d", &s[i].id);
                    printf("Enter student name and grade: \n");
                    scanf("%s %f", s[i].name, &s[i].grade);
                }
            }
            break;
            
            case 5:
            printf("Enter delete id: ");
            scanf("%d", &searchid);
            for (int i = 0; i < numofstudent; i++) 
            {
                if(searchid == s[i].id)
                {
                    for(int k = i; k < numofstudent -1; k++)
                    {
                        s[k] = s[k+1];
                    }
                    numofstudent--;
                    printf("The student with id %d was delete successfully.\n", searchid);
                    break;
                }
                printf("The student with id %d not found.\n", searchid);
            }
            break;

            case 6:
                printf("The details of the students: \n");
                for (int i = 0; i < numofstudent; i++) 
                {
                    printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].grade);
                    printf("Average Grade: %.2f\n", averagegrade);
                }
            break;
        }
    }
    return 0;
}
