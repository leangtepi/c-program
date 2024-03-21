#include<stdio.h>
int main()
{
    int id;
    char Name[20];
    char Major[20];
    char Department[20];
    char class[20];
    int opt;
    A:
    printf("1.Input data\n2.Display data\n3.exit\n");
    scanf("%i", &opt);
    switch(opt)
    {
        case 1:
            printf("Enter id, Name, Major, Department and class\n");
            scanf("%i%s%s%s%s", &id, Name, Major, Department, class);
            goto A;
            break;
        case 2:
            printf("ID = %i\nName = %s\nMajor = %s\nDepartment = %s\nclass = %s\n", id, Name, Major, Department, class);
            goto A;
            break;
        case 3:
            break;
        default:
            printf("Invalid option\n");
    }
}