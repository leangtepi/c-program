#include<stdio.h>
int main()
{
    int id;
    char Name[20];
    char classname[20];
    int math = 0;
    int khmer = 0;
    int english =0;
    int total = 0;
    int opt;
    A:
    printf("1.Input\n2.display\n3.calculate\n");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
            printf("Enter id, Name, classname, math, khmer, english: ");
            scanf("%d %s %s %d %d %d", &id, Name, classname, &math, &khmer, &english);
            goto A; 
            break;
        case 2:
            printf("id = %d\nName = %s\nclassname = %s\nmath = %d\nkhmer = %d\nenglish = %d\n", id, Name, classname, math, khmer, english);
            goto A;
            break;
        case 3:
            total = math + khmer + english;
            break;
        default:
            printf("Invalid option.\n");
    }
    printf("total: %d\n", total);
}