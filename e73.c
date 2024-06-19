#include<stdio.h>

int i;

void input(int id[], char name[][20], float salary[]);
void output(int id[], char name[][20], float salary[]);

int main()
{
    int id[100];
    char name[100][20];
    float salary[100];
    int opt;

    while(1)
    {
        printf("1.input\n2.output\n3.exit\n");
        printf("Enter your option: ");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: 
            input(id, name, salary);
            break;
            case 2:
            output(id, name, salary);
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("Invalid option, Please try again.\n");
        }
    }
    return 0;
}
void input(int id[], char name[][20], float salary[])
{
    while(1)
    {
        printf("Enter employee id(0 to stop): ");
        scanf("%d", &id[i]);
        if(id[i] == 0)
        {
            break;
        }
        printf("Enter employee name: ");
        scanf("%s", name[i]);
        printf("Enter employee salary: ");
        scanf("%f", &salary[i]);
        i++;
    }
}
void output(int id[], char name[][20], float salary[])
{
    printf("Employee details: \n");
    for(int j = 0; j < i; j++)
    {
        printf("%d\t%s\t%.2f\n", id[j], name[j], salary[j]);
    }
}