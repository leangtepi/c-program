#include<stdio.h>
int main()
{
    int id;
    char Name[20];
    char classname[20];
    int math = 0;
    int khmer = 0;
    int english =0;
    int total=0;
    char grade;
    int opt;
    A:
    printf("1.Input\n2.Output\n3.calculate");
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
        total = (math + khmer + english)/3;
        printf("total: %i\n", total);
        if(total >=50)
        {
            printf("you have passed.\n");
            if(total >=80)
            {
                grade = 'A';
            }
            else if(total >= 70)
            {
                grade = 'B';
            }
            else if(total >= 60)
            {
                grade = 'C';
            }
            else if(total >= 50)
            {
                grade = 'D';
            }
        }
        else
        {
            printf("you have failed.\n");
        }
        break;
        default:
        printf("Invalid option.\n");
    }
    printf("Grade: %c\n", grade);
}    