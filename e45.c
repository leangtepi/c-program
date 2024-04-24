#include<stdio.h>

int main()
{
    int id;
    char name[20];
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("Person %d\n",i);
        printf("Input ID:");
        scanf("%d",&id);
        printf("Input Name:");
        scanf("%s", name);
        printf("ID:%d\n", id);
        printf("Name:%s\n", name);
        printf("\n");
    }
}