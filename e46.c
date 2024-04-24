#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 10; i >= n; i--)
    {
        printf("I:%d\n", i);
    }
}