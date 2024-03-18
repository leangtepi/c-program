#include<stdio.h>
int main()
{
    int ID;
    char Name[20];
    float Addition;
    float chemistry_score;
    float math_score;
    float physic_score;
    float extra_point;
    char Grade;
    printf("Enter your ID:");
    scanf("%i", &ID);
    printf("Enter your Name:");
    scanf(" %s", Name);
    printf("chemistry_score, math_score, physic_score:");
    scanf("%f %f %f", &chemistry_score, &math_score, &physic_score);
    Addition = (chemistry_score + math_score + physic_score)/3;
    printf(":%f", Addition);
    if(Addition <50)
    {
        printf("you'll will get an extra point.\n");
        extra_point = 20;
        Addition += extra_point;
    }
    else if(Addition >=50)
        {
            printf("you have passed.\n");
            if(Addition >=80)
            {
                Grade = 'A';
            }
            else if(Addition >=70)
            {
                Grade = 'B';
            }
            else if(Addition >=60)
            {
                Grade = 'C';
            }
        }
    else
    {
        printf("you've failed.\n");
    }
    printf("ID: %d\n",ID);
    printf("Name: %s\n",Name);
    printf("chemistry_score: %f\n", chemistry_score);
    printf("math_score: %f\n", math_score);
    printf("physic_score: %f\n", physic_score);
    printf("Addition: %f\n", Addition);
    printf("extra_point: %f\n", extra_point);
    printf("Grade: %c\n", Grade);
}
