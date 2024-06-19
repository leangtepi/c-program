#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
int searchid;

void input(int id[], char name[][50], char level[][50], float price[]);
void output(int id[], char name[][50], char level[][50], float price[]);
void search(int id[], char name[][50], char level[][50], float price[]);
void edit(int id[], char name[][50], char level[][50], float price[]);

int main()
{
    int id[50];
    char name[20][50];
    char level[20][50];
    float price[50];
    int opt;
    while(1)
    {
    printf("1.input\n2.output\n3.search\n4.edit\n5.exit\n");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
        input(id, name, level, price);
        break;
        case 2:
        output(id, name, level, price);
        break;
        case 3:
        search(id, name, level, price);
        break;
        case 4:
        edit(id, name, level, price);
        break;
        case 5:
        exit(0);
        default:
        printf("invalid opt.\n");
    }
    }
    return 0;
}
void input(int id[], char name[][50], char level[][50], float price[])
{
    while(1)
    {
        printf("Enter your id: ");
        scanf("%d", &id[i]);
        if(id[i] == 0)
        {
            break;
        }
        printf("Enter your name: ");
        scanf("%s", name[i]);
        int opt;
        printf("Enter the level: \n");
        printf("1.level A\n2.level B\n3.level C\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: 
            strcpy(level[i], "A");
            price[i] = 20;
            break;
            case 2:
            strcpy(level[i], "B");
            price[i] = 30;
            break;
            case 3:
            strcpy(level[i], "C");
            price[i] = 40;
            break;
            default:
            printf("invalid opt.\n");
        }
        i++;
    }
}
void output(int id[], char name[][50], char level[][50], float price[])
{
    printf("The students details: \n");
    for(int j = 0; j < i; j++)
    {
        printf("%d\t%s\n%s\t%.2f\n", id[j], name[j], level[j], price[j]);
    }
}
void search(int id[], char name[][50], char level[][50], float price[])
{
    printf("input the search id: ");
    scanf("%d", &searchid);
    for(int j = 0; j < i; j++)
    {
    if(searchid == id[j])
    {
        printf("%d\t%s\n%s\t%.2f\n", id[j], name[j], level[j], price[j]);
    }
    }
}
void edit(int id[], char name[][50], char level[][50], float price[])
{
    printf("edit search id: ");
    scanf("%d", &searchid);
    for(int j = 0; j < i; j++)
    {     
    if(searchid == id[j])
    {
        printf("Enter your name: ");
        scanf("%s", name[j]);
        int opt;
        printf("Enter the level: \n");
        printf("1.level A\n2.level B\n3.level C\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: 
            strcpy(level[i], "A");
            price[i] = 20;
            break;
            case 2:
            strcpy(level[i], "B");
            price[i] = 30;
            break;
            case 3:
            strcpy(level[i], "C");
            price[i] = 40;
            break;
            default:
            printf("invalid opt.\n");
        }
        break;
    }
    }
}