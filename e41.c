#include<stdio.h>

int main()
{
    int age;
    do
    {
        printf("you are eligible for the job.\n");
        scanf("%d", &age);
    } 
    while(age >=18 && age <=65);
}