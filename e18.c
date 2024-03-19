#include<stdio.h>
int main()
{
    int num1, num2, choice, total =0;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Enter your choice: 1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        total = num1+ num2;
    }
    else if(choice == 2)
    {
        total = num1-num2;
    }
    else if(choice == 3)
    {
        total = num1*num2;
    }
    else if(choice == 4)
    {
        if(num1 == 0 || num2 == 0)
        {
            printf("can't divide by zero \n");
        }
        else
        {
        total = num1/num2;
        }
    }
        printf("%d",total);

    return 0;
}