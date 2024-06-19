#include <stdio.h>

struct student 
{
    int id;
    char name[20];
    char gender;
} s[20];

struct teacher 
{
    int id;
    char name[20];
    char gender;
} t[20];

int main() 
{
    int opt;
    int numofstudent = 0;
    int numofteacher = 0;
    FILE * fp;
    fp = fopen("file3.txt", "w");

    if (fp == NULL) 
    {
        printf("Error opening file.\n");
        return 1; // Exit program if file opening fails
    }

    while (1) 
    {
        printf("1. Add students\n2. Add teachers\n3. Student output\n4. Teacher output\n5. Exit\n");
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
                    
                    if (s[i].id == 0) 
                    {
                        break; 
                    }
                    
                    printf("Enter student name: ");
                    scanf("%s", s[i].name);
                    
                    printf("Enter student gender: ");
                    scanf(" %c", &s[i].gender);
                }
                break;

            case 2:
                printf("Enter the number of teachers: ");
                scanf("%d", &numofteacher);
                
                for (int j = 0; j < numofteacher; j++) 
                {
                    printf("Enter teacher id: ");
                    scanf("%d", &t[j].id);
                    
                    if (t[j].id == 0) 
                    {
                        break; 
                    }
                    
                    printf("Enter teacher name: ");
                    scanf("%s", t[j].name);
                    
                    printf("Enter teacher gender: ");
                    scanf(" %c", &t[j].gender);
                }
                break;

            case 3:
                printf("Student data:\n");
                for (int i = 0; i < numofstudent; i++) 
                {
                    printf("Student %d\n", i + 1);
                    printf("ID: %d\n", s[i].id);
                    printf("Name: %s\n", s[i].name);
                    printf("Gender: %c\n", s[i].gender);
                    printf("\n");
                }
                break;

            case 4:
                printf("Teacher data:\n");
                for (int j = 0; j < numofteacher; j++) 
                {
                    printf("Teacher %d\n", j + 1);
                    printf("ID: %d\n", t[j].id);
                    printf("Name: %s\n", t[j].name);
                    printf("Gender: %c\n", t[j].gender);
                    printf("\n");
                }
                break;

            case 5:
                fclose(fp); // Close the file before exiting
                return 0; // Exit the program

            default:
                printf("Invalid option. Please choose again.\n");
        }
    }

    fclose(fp); // Close the file if somehow the loop exits unexpectedly
    return 0;
}
