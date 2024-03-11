#include<stdio.h>

int main()
{
    int StudentID;
    char Name[20], Major[20];
    float Fee;
    char Gender;
    printf("Enter your name:");
    scanf("%s",Name);
    printf("Enter your Major:");
    scanf("%s",Major);
    printf("Enter your StudentID:");
    scanf("%i", &StudentID);
    printf("Enter your Fee:");
    scanf("%f", &Fee);
    printf("Enter your Gender:");
    scanf(" %c", &Gender);
    printf("\n");
    printf("Name:%s\n", Name);
    printf("Major:%s\n", Major);
    printf("StudentID:%i\n", StudentID);
    printf("Fee:%f\n", Fee);
    printf("Gender:%c\n", Gender);
    return 0;
}