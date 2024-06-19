#include<stdio.h>
#include<string.h>
int ID[50];
char Name[20][50];
char status[20][50];
int limit;
int age[50];
int searchid;

void input();
void votecase();
void search();
void edit();
void output();

int main()
{
    int opt;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    while(1)
    {
        printf("1.input\n2.output\n3.searchid\n4.editsearchid\n5.exit\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: 
            input();
            break;
            case 2: 
            votecase();
            output();
            break;
            case 3:
            search();
            break;
            case 4:
            edit();
            break;
            case 5: 
            return 0;
        }
    }
}
void input()
{
    int i;
    for(i = 0; i < limit; i++)
    {
        printf("Enter your Name: ");
        scanf("%s", Name[i]);
        printf("Enter ID: ");
        scanf("%d", &ID[i]);
        printf("Enter your age: ");
        scanf("%d", &age[i]);
    }
}
void votecase()
{
    int i;
    for(i = 0; i < limit; i++)
    {
        if(age[i] >= 18)
        {
            strcpy(status[i], "Adult");
        }
        else
        {
            strcpy(status[i], "Youngster");
        }   
    }
}
void search()
{
    int i;
    printf("Enter search id: ");
    scanf("%d", &searchid);
    for(i = 0; i < limit; i++)
    {
        if(searchid == ID[i])
        {
            printf("%s\t%d\t%d\t%s\n", Name[i], ID[i], age[i], status[i]);
        }
    }
}
void edit()
{
    int i;
    printf("input edit search id: ");
    scanf("%d", &searchid);
    for(i = 0; i < limit; i++)
    {
        if(searchid == ID[i])
        {
        printf("Enter your Name: ");
        scanf("%s", Name[i]);
        printf("Enter ID: ");
        scanf("%d", &ID[i]);
        printf("Enter your age: ");
        scanf("%d", &age[i]);
        }
    }
}
void output()
{
    int i;
    printf("Name\tID\tAge\tStatus\n");
    for(i = 0; i < limit; i++)
    {
        printf("%s\t%d\t%d\t%s\n", Name[i], ID[i], age[i], status[i]);
    }
}