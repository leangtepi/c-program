#include<stdio.h>
int main()
{
    int a,b,c;
    float subtraction;
    float multiplication;
    float division;
    float Addition;
    printf("a,b,c:");
    scanf("%i %d %i", &a,&b,&c);
    subtraction = a - b -c;
    multiplication = a * b * c;
    division = a / b / c;
    Addition = a + b + c;
    printf(":%f", multiplication);
    printf(":%f", subtraction);
    printf(":%f", division);
    printf(":%f", Addition);
    return 0;
}