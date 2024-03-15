#include<stdio.h>
int main()
{
    int ID;
    char Name[20];
    float Addition;
    float chemistry_score;
    float math_score;
    float physic_score;
    printf("Enter your ID:");
    scanf("%i", &ID);
    printf("Enter your Name:");
    scanf(" %s", Name);
    printf("chemistry_score, math_score, physic_score:");
    scanf("%f %f %f", &chemistry_score, &math_score, &physic_score);
    Addition = (chemistry_score + math_score + physic_score)/3;
    printf(":%f", Addition);
    if(Addition >=50)
    {
        printf("you have passed.\n");
        if(Addition >= 80)
        {
            printf("you got grade A.\n");
        }
        else if(Addition >=70)
        {
            printf("you got grade B.\n");
        }
        else if(Addition >=60)
        {
            printf("you got grade C.\n");
        }
    }
    else
    {
        printf("you have failed.\n");
    }
}