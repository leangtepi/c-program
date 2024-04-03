#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[20];
    int time = 3;
    while(1)
    {
        printf("Enter your Name: ");
        scanf("%s", Name);
        printf("Name: %s",Name);
        time--;
        if(time == 0)
        {
            printf("Exit");
            exit(1);
        }
    }
}