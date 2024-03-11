#include<stdio.h>
int main()
{
    int id;//%i %d
    float salary; //%f
    char Gender; //%c 
    char Name[20];//string %s
    printf("Enter your name:");
    scanf("%s",Name);
    printf("Enter your id:");
    scanf("%d",&id);
    printf("Enter your salary:");
    scanf("%f", &salary);
    printf("Enter your gender:");
    scanf(" %c", &Gender);
    printf("\n");
    printf("Name:%s\n",Name);
    printf("Id:%d\n",id);
    printf("Salary:%.2f\n",salary);
    printf("Gender:%c\n",Gender);
    return 0;
    }