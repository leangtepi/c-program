#include<stdio.h>
#include<stdlib.h>  
int main()
{
    int id;
    char Name[20];
    float gpa;
    while(1)
    {
        int opt;
        printf("1.Input\n2.Output\n3.Exit");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            printf("Enter your id, Name, gpa: ");
            scanf("%d %s %f", &id, Name, &gpa);
            break;
            case 2:
            printf("id = %d\nName = %s\ngpa = %f\n", id, Name, gpa);
            break;
            case 3:
            printf("Exit the program.\n");
            exit(1);
            break;
        }
    }
}