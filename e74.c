#include<stdio.h>
#include<stdlib.h>

int i = 0; // Initialize i to 0
int searchid;

void input(int id[], char name[][20], int age[], char major[][20], float salary[]);
void output(int id[], char name[][20], int age[], char major[][20], float salary[]);
void search(int id[], char name[][20], int age[], char major[][20], float salary[]);

int main() 
{
    int id[50];
    char name[50][20];
    int age[50];
    char major[50][20];
    float salary[50];
    int opt;

    while(1) 
    {
        printf("1.input\n2.output\n3.search\n4.exit\n");
        scanf("%d", &opt);

        switch (opt) 
        {
            case 1:
                input(id, name, age, major, salary);
                break;
            case 2:
                output(id, name, age, major, salary);
                break;
            case 3:
                search(id, name, age, major, salary);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("invalid option.\n");
        }
    }
    return 0;
}

void input(int id[], char name[][20], int age[], char major[][20], float salary[]) 
{
    while(i < 50) 
    { // Prevent overflow
        printf("Enter employee id(0 to stop): ");
        scanf("%d", &id[i]);
        if(id[i] == 0) 
        {
            break;
        }
        printf("Enter employee name: ");
        scanf("%s", name[i]);
        printf("Enter employee age: ");
        scanf("%d", &age[i]);
        printf("Enter employee major: ");
        scanf("%s", major[i]);
        printf("Enter employee salary: ");
        scanf("%f", &salary[i]);
        i++;
    }
}

void output(int id[], char name[][20], int age[], char major[][20], float salary[]) 
{
    printf("Employee details: \n");
    for(int j = 0; j < i; j++) 
    {
        printf("%d\t%s\t%d\t%s\t%.2f\n", id[j], name[j], age[j], major[j], salary[j]);
    }
}

void search(int id[], char name[][20], int age[], char major[][20], float salary[]) 
{
    printf("Enter search id: ");
    scanf("%d", &searchid);
    for(int j = 0; j < i; j++) 
    {
        if(searchid == id[j]) {
            printf("%d\t%s\t%d\t%s\t%.2f\n", id[j], name[j], age[j], major[j], salary[j]);
            return; // Exit after finding the first match
        }
    }
    printf("Employee with id %d not found.\n", searchid);
}
