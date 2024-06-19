#include<stdio.h>
#include<stdlib.h>


//Array of structure
struct pet
{
    int id;
    char name[50];
    int age;
}p[50];

int i = 0;

void input();
void output();
void delete();

int main()
{
    int opt;
    while(1)
    {
        printf("1.input\n2.output\n3.delete\n4.exit");
        scanf("%d", &opt);
        switch (opt)
        {
            case 1:
            input();
            break;
            case 2:
            output();
            break;
            case 3:
            delete();
            break;
            case 4:
            exit(0);
        }
    }
}
void input()
{
    while(1)
    {
        printf("input pet id(0 to exit): ");
        scanf("%d", &p[i].id);
        if(p[i].id == 0)
        {
            return;
        }
        printf("input pet name: ");
        scanf("%s", p[i].name);
        printf("input the age: ");
        scanf(" %d", &p[i].age);
        i++;
    }
}
void output()
{
    printf("The details of the pet: \n");
    for(int j = 0; j < i; j++)
    {
        printf("%d %s %d", p[j].id, p[j].name, p[j].age);
    }
}
void delete()
{
    int searchid;
    printf("input search id: ");
    scanf("%d", &searchid);
    for(int j = 0; j < i; j++)
    {
    if(searchid == p[j].id)
    {
        for(int k = j; k < i - 1; k++)
        {
            p[k] = p[k+1];
        }
        i--;
        printf("The pet with id %d was delete successfully.\n", searchid);
        return;
    }
    printf("The pet with id %d not found.\n", searchid);
    }   
}