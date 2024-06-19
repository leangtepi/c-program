#include<stdio.h>
#include<stdlib.h>

int id[20], seatnumber[20], room[20], j = 0;
float math[20], english[20], chemistry[20], sum[20];

void input();
void calculate();
void output();

int main()
{
    int opt;
    while(1)
    {
    printf("1.Input\n2.Output\n3.Calculate\n4.exit\n");
    scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                input();
                break;
            case 2:
                output();
                break;
            case 3:
                calculate();
                break;
            case 4:
                exit(1);
        }
    }
}

void input()
{
    int opt;
    do
    {
        printf("Enter id, seatnumber, room of the student: ");
        scanf("%d %d %d", &id[j], &seatnumber[j], &room[j]);
        printf("Enter the math, english and chemistry score: ");
        scanf("%f %f %f", &math[j], &english[j], &chemistry[j]);
        j++;
        printf("1.Continue\n2.Stop");
        scanf("%d",&opt);
        if(opt == 1)
        {
        break;
        }
    }while(1);
}

void calculate()
{
    for(int i = 0; i <= j; i++)
    {
        sum[i] = math[i] + english[i] + chemistry[i];
    }
}

void output()
{
    for(int i = 0; i <= j; i++)
    {
        printf("The id, seatnumber, room of the student is: %d %d %d\n", id[i], seatnumber[i], room[i]); 
        printf("The sum score is: %.2f\n", sum[i]);
    }  
}
