#include<stdio.h>
#include<string.h>

int main() 
{
    char position[20][20], name[20][20];
    float salary[20] = {0}; // Initialize salary array
    int opt, limit, id[20], experience[20];
    int searchid;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    do {
        printf("1. input\n2. output\n3. salary\n4. edit search id\n5.input search id\n");
        scanf("%d", &opt);
        
        switch(opt) {
            case 1:
                for(int i = 0; i < limit; i++) { // Corrected loop bounds
                    printf("Enter the id: ");
                    scanf("%d", &id[i]);
                    printf("Enter your name: ");
                    scanf("%s", name[i]);
                    printf("Enter your position: ");
                    scanf("%s", position[i]);
                    printf("Enter your experience: ");
                    scanf("%d", &experience[i]);
                }
                break;
                
            case 2:
                printf("ID\tName\tPosition\tExperience\tSalary\n");
                for(int i = 0; i < limit; i++) { // Corrected loop bounds
                    printf("%d\t%s\t%s\t\t%d\t\t%.2f\n", id[i], name[i], position[i], experience[i], salary[i]);
                }
                break;
                
            case 3: 
                for(int i = 0; i < limit; i++) { // Corrected loop bounds
                    if(strcmp(position[i], "barista") == 0 && experience[i] >= 2) {
                        strcpy(position[i], "manager");
                        experience[i] = 0;
                        salary[i] = 600;
                    }
                    else if(strcmp(position[i], "intern") == 0 && experience[i] >= 2) {
                        strcpy(position[i], "barista");
                        experience[i] = 0;
                        salary[i] = 300;
                    }
                    else if(strcmp(position[i], "unemploy") == 0 && experience[i] >= 0) { // Corrected condition
                        strcpy(position[i], "intern");
                        experience[i] = 0;
                        salary[i] = 100;
                    }
                }
                break;
                
            case 4:
                printf("edit search id");
                scanf("%d",&searchid);
                for(int i = 0; i < limit; i++)
                {
                    if(searchid == id[i])
                    {
                        printf("Enter the id: ");
                        scanf("%d", &id[i]);
                        printf("Enter your name: ");
                        scanf("%s", name[i]);
                        printf("Enter your position: ");
                        scanf("%s", position[i]);
                        printf("Enter your experience: ");
                        scanf("%d", &experience[i]);
                    }    
                }
                break;
            case 5:
                printf("input search id");
                scanf("%d",&searchid);
                for(int i = 0; i < limit; i++)
                {
                    if(searchid == id[i])
                    {
                        printf("%d\t%s\t%s\t\t%d\t\t%.2f\n", id[i], name[i], position[i], experience[i], salary[i]);
                    }    
                }
            default:
                printf("Invalid option\n");

        }
    } while(opt != 6);
    
    return 0;
}
