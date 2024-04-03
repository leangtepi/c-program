#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=5;
    while(1)
    {
        printf("%d\n",num);
        num--;
        if(num == 0)
        {
            printf("exit");
            exit(1);
        }
    }
}