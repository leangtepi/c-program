#include<stdio.h>
#include<string.h>
int main()
{
    int id[20], yearofexperience[20], searchid,limit, opt;
    char name[20][20], position[20][20];
    float salary[20];
    int j = 1;
    do
    {
        printf("1.input\n2.display\n3.update\n4.id search\n5.exit the program\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: 
            while(1)
            {
                printf("Input 0 to exit input");
                printf("Enter your id: ");
                scanf("%d", &id[j]);
                if(id[j] == 0)
                    break;
                printf("Enter your name: ");
                scanf(" %s", name[j]);
                printf("Enter your experience: ");
                scanf(" %d", &yearofexperience[j]);
                printf("Enter your position: ");
                scanf(" %s", position[j]);
                j++;
            }
            break;
            case 2: 
            printf("ID\tName\texperience\tposition\tsalary\n");
            for(int i = 1; i <= j; i++)
            {
                printf("%d\t%s\t%d\t\t%s\t\t%.2f\n", id[i], name[i], yearofexperience[i], position[i], salary[i]);
            }
            break;
            case 3:
            for(int i = 1; i <= j; i++)
            {
               if(strcmp(position[i], "barista") == 0 && yearofexperience[i] >= 2) 
                {
                    strcpy(position[i], "manager");
                    yearofexperience[i] = 0;
                    salary[i] = 600;
                }
                else if(strcmp(position[i], "intern") == 0 && yearofexperience[i] >= 2) 
                {
                    strcpy(position[i], "barista");
                    yearofexperience[i] = 0;
                    salary[i] = 300;
                }
                else if(strcmp(position[i], "unemploy") == 0 && yearofexperience[i] >= 0) 
                { 
                    strcpy(position[i], "intern");
                    yearofexperience[i] = 0;
                    salary[i] = 100;
                }
            break;
            case 4: 
            printf("input search id: ");
            scanf("%d", &searchid);
            for(int i = 1; i <= j; i++)
            {
                if(searchid == id[i])
                {
                    printf("%d\t%s\t%d\t\t%s\t\t%.2f\n", id[i], name[i], yearofexperience[i], position[i], salary[i]);
                }
            }
            break;
            case 5: 
            for(int i = 1; i <= j; i++)
            {
                printf("Exit the program.\n");
            }
            }
        }   
    }while(opt != 4);
}