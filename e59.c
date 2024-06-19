#include<stdio.h>

int main()
{
    int id[10], age[10];
    char name[10][20];
    int limit, opt;
    
    printf("enter the limit: ");
    scanf("%d", &limit);
    do
    {
    printf("1. Input\n2.Output\n3.voter\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        for(int i = 1; i <= limit; i++)
        {
            printf("Enter your id: ");
            scanf("%d", &id[i]);
            printf("Enter your name: ");
            scanf(" %s", name[i]);
            printf("Enter your age: ");
            scanf("%d", &age[i]);
        }
        break;
        case 2:
        printf("ID\tName\tage\n");
        for(int i = 1; i <= limit; i++)
        {
            printf("%d\t%s\t%d\n", id[i], name[i], age[i]);
        }
        break;
        case 3:
        printf("you are eligible to vote.\n");
        for(int i = 1; i <= limit; i++)
        {
        if(age[i] >= 18)
        {
            printf("%d\t%s\t%d\n", id[i], name[i], age[i]);
        }
        }
    }
    } while (opt != 4);
}