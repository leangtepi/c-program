#include<stdio.h>
#include<stdlib.h>
int main()
{
    int opt;
    int age;
    do
    {
        printf("1.input\n2.output\n3.exit");
        scanf("%d", &opt);
        switch(opt)
        {
           case 1:
           printf("Enter your age: ");
           scanf("%d", &age);
           break;
           case 2:
           printf("age = %d\n", age);
           break;
           case 3:
           printf("exit the program.\n");
           exit(0);
           break;
        }
        if(age >=18 && age <=65 )
        {
            printf("you are eligible for the job.\n");
            scanf("%d", &age);
        }
    } 
    while (age >=18 && age <=65);
}