#include<stdio.h>
int main()
{
    int height;
    float salary;
    char grade;
    char Name[20];
    printf("Enter your name:");
    scanf("%s",Name);
    printf("Enter your height:");
    scanf("%d", &height);
    printf("Enter your salary:");
    scanf("%f", &salary);
    printf("Enter your grade:");
    scanf(" %c", &grade);
    printf("\n");
    printf("Name:%s\n", Name);
    printf("height:%d\n", height);
    printf("salary:%f\n", salary);
    printf("grade:%c\n",grade);
    return 0;
}