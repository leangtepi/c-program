#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number between 1 and 100: ");
    scanf("%d", &num);
    do
    {
        printf("Correct.\n");
        scanf("%d", &num);
    }
    while(num >=1 && num <=100);
}