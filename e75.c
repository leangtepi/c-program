#include <stdio.h>
#include <stdlib.h>

int i = 0;

void input(float price, float gas[], float total[]);
void output(float price, float gas[], float total[]);
float cal(float price, float gas);

int main()
{
    float price = 4125;
    float gas[20];
    float total[20];
    int opt;
    
    while(1)
    {
        printf("1.input\n2.output\n3.exit\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: 
                input(price, gas, total);
                break;
            case 2: 
                output(price, gas, total);
                break;
            case 3:
                exit(0);
            default:
                printf("invalid opt.\n");
        }
    }
    return 0;
}

void input(float price, float gas[], float total[]) 
{
    while(1)
    {
        printf("Enter the gas: ");
        scanf("%f", &gas[i]);
        if(gas[i] == 0)
            break;
        i++;
    }
}

void output(float price, float gas[], float total[])
{
    printf("The details: \n");
    for(int j = 0; j < i; j++)
    {
        total[j] = cal(price, gas[j]);
        printf("%.2f\t%.2f\ttotal: %.2f\n", price, gas[j], total[j]);
    }
}

float cal(float price, float gas)
{
    return gas * price;
}
