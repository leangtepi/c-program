#include<stdio.h>
#include<stdlib.h>
int main()
{
    char Name[20];
    int time = -1;
    int opt;
    while(1)
    {
        if(time ==-1)
        {
        printf("Input the time");
        scanf("%d",&time);
        }
        printf("1.Input\n2.Output\n3.exit");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
            printf("Enter Name: ");
            scanf("%s", &Name);
            break;
            case 2:
            printf("Name: %s\n", Name);
            break;
            case 3:
            printf("Exit the program.\n");
            exit(1);
            break;
 
        }
        if(time == 0)
        {
            printf("Exit");
            exit(1);
        }
        time--;
    }


}