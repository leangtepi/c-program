#include<stdio.h>

int main()
{
    int num[10];
    char name[20][50];
    for(int i = 0; i < 3; i++)
    {
        printf("input the number: ");
        scanf("%d", &num[i]);
        printf("Enter the name: ");
        scanf("%s", name[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", num[i]);
        printf("name: %s\n", name[i]);
    }
}