#include<stdio.h>

int main()
{
    int num1 = 0;
    do
    {
        printf("1.Hello world\n2.Exist\n");
        scanf("%d",&num1);
        printf("Hello world\n");
    }
    while(num1 == 1);
    // while(num1 == 1)
    // {
    //     printf("1.Hello world\n2.Exist\n");
    //     scanf("%d",&num1);
    //     printf("Hello world\n");
    // }
}