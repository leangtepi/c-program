#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int totalWorkHour[50];
    char workhour[50][50];
    int limit, opt;
    do
    {

    printf("1. Input\n2. Output\n3. Exit\n");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
            printf("Enter the limit: ");
            scanf("%d", &limit);
            for(int i = 0; i < limit; i++)
            {
                printf("Enter your work hour: ");
                scanf("%d", &totalWorkHour[i]);
            }
            break;
        case 2:
            for(int i = 0; i < limit; i++)
            {
                if(totalWorkHour[i] >= 60)
                {
                    strcpy(workhour[i], "over time");
                }
                else if(totalWorkHour[i] >= 40)
                {
                    strcpy(workhour[i], "well done");
                }
                else if(totalWorkHour[i] >= 20)
                {
                    strcpy(workhour[i], "be more productive");
                }
            }
            for(int i = 0; i < limit; i++)
            {
                printf("Work hour: %d - Status: %s\n", totalWorkHour[i], workhour[i]);
            }
            break;
        case 3: 
            printf("Exit.\n");
            break;
        default:
            printf("Invalid option.\n");
            break;
    }    
    }while(opt !=3);
    return 0;
}
