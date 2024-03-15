#include<stdio.h>
int main()
{
    float Addition;
    int ID;
    char Name[20];
    float chemistry_score;
    float math_score;
    float physic_score;
    printf("Enter your Id:");
    scanf("%i", &ID);
    printf("Enter your Name:");
    scanf(" %s", Name);
    printf("chemistry_score, math_score, physic_score:");
    scanf(" %f %f %f", &chemistry_score, &math_score, &physic_score);
    Addition = (chemistry_score + math_score + physic_score)/3;
    printf(":%f", Addition);
    if(Addition >=50)
    {

        printf("you have passed.\n");
        if(Addition >= 80)
        {
             printf("you have passed with grade A.\n");
        }
    }
    else
    {
        printf("you have failed.");
    }
}