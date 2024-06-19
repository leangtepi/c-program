#include<stdio.h>
#include<string.h>
int main()
{
    int limit, opt;
    char Name[20][20], status[20][20];
    int age[20];
    printf("Enter the limit: ");
    scanf("%d", &limit);
    do
    {
        printf("1.input\n2.output\n3.retirement case\n4.exit.\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
        for(int i = 0; i < limit; i++)
        {
            printf("Enter the name: ");
            scanf("%s", Name[i]);
            printf("Enter the age: ");
            scanf("%d", &age[i]);
        }
        break;
        case 2:
        printf("name\tage\tstatus\n");
        for(int i = 0; i < limit; i++)
        {
            printf("%s\t%d\t%s\n", Name[i], age[i], status[i]);
        }
        break;
        case 3:
        for(int i = 0; i < limit; i++)
        {
            if(age[i] >= 60) {
            strcpy(status[i], "retirement candidate");
        }
        else if(age[i] >= 18 && age[i] < 59) {
            strcpy(status[i], "working candidate");
        }
        else if(age[i] < 18) {
            strcpy(status[i], "student candidate");
        }
        }
        break;
        case 4:
        printf("\nRetired candidate\n");
        for(int i = 0; i < limit; i++)
        {
            if(age[i] >= 60)
            {
                printf("%s\t%d\t%s\n", Name[i], age[i], status[i]);
            }
        }
        printf("\nRetired candidate\n");
        for(int i = 0; i < limit; i++)
        {
            if(age[i] >= 18 && age[i]<60)
            {
                printf("%s\t%d\t%s\n", Name[i], age[i], status[i]);
            }
        }
        }
    }while(opt != 5);
}