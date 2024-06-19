#include<stdio.h>

int main()
{
    int id[10], age[10];
    char name[10][20];
    float mathscore[10], englishscore[10], total[10];
    int limit, opt;
    printf("enter the limit: ");
    scanf("%d", &limit);
    do
    {
    printf("1. Input\n2.Output\n3.grading\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        for(int i = 1; i <= limit; i++)
        {
            printf("Enter your id: ");
            scanf("%d", &id[i]);
            printf("Enter your name: ");
            scanf(" %s", name[i]);
            printf("Enter your age: ");
            scanf("%d", &age[i]);
            printf("Enter your math english: ");
            scanf("%f %f", &mathscore[i], &englishscore[i]);
            total[i] = mathscore[i] + englishscore[i];
        }
        break;
        case 2:
        printf("ID\tName\tage\ttotal\n");
        for(int i = 1; i <= limit; i++)
        {
            printf("%d\t%s\t%d\t%.2f\n", id[i], name[i], age[i], total[i]);
        }
        break;
        case 3:
        printf("you've pass.\n");
        for(int i = 1; i <= limit; i++)
        {
        if(total[i]/3 >= 50)
        {
            printf("%d\t%s\t%d\t%.2f\n", id[i], name[i], age[i], total[i]);
        }
        }
    }
    } while (opt != 4);
}