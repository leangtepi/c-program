#include<stdio.h>
#include<string.h>


int main()
{
    int id[10], age[10];
    char name[10][20];
    float mathscore[10], englishscore[10], total[10];
    char Grade[10][20];
    int limit, opt;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    do
    {
        printf("1.input\n2.output\n3.total score\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
            for(int i = 1; i <= limit; i++) 
            {
            printf("Enter your id: ");
            scanf("%d", &id[i]);
            printf("Enter your age: ");
            scanf("%d", &age[i]);
            printf("Enter your name: ");
            scanf(" %s", name[i]);
            printf("Enter your math and english score: ");
            scanf("%f %f", &mathscore[i], &englishscore[i]);
            total[i] = mathscore[i] + englishscore[i];
            }
            break;
            case 2:
            printf("ID\tName\tage\ttotal\tGrade\n");
            for(int i = 1; i <= limit; i++)
            {
            printf("%d\t%d\t%s\t%.2f\t%s\n", id[i], age[i], name[i], total[i],Grade[i]);
            }
            break;
            case 3:
            for(int i = 1; i <= limit; i++)
            {
                if(total[i]/2 >= 50)
                {
                printf("you've pass.\n");
                    strcpy(Grade[i], "pass");
                    if(total[i]/2 >= 70)
                    {
                        strcpy(Grade[i], "distinction");
                        
                        // string copy
                        if(total[i]/2 >= 80)
                        {
                            strcpy(Grade[i], "first class");
                        }
                    }
                }
                else
                {
                    printf("you've failed.\n");
                    strcpy(Grade[i], "fail");
                }
            }

            break;
        }
    }while (opt != 4);
}