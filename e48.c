#include<stdio.h>

int main()
{
    char bakeryname[20];
    int limit;
    int time;
    float price;
    float pastry;
    float soldenpastry;
    float totalofpastry;
    float totalprice;
    int opt;
    A:
    printf("1.input\n2.output\n3.exit\n");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
        printf("Enter the limit: ");
        scanf("%d", &limit);
        for(int i = 1; i <= limit; i++)
        {
            printf("Enter the bakery name: ");
            scanf("%s", bakeryname);
            printf("Enter the time: ");
            scanf("%d", &time);
            printf("Enter the solden pastry: ");
            scanf("%f", &soldenpastry);
            printf("Enter the price: ");
            scanf("%f", &price);
            totalofpastry = time * 20;
            printf("totalofpastry: %.2f\n", totalofpastry);
            totalprice = totalofpastry * price;
            printf("totalprice: %.2f\n", totalprice);
            pastry = totalofpastry - soldenpastry;
            printf("pastry: %f\n", pastry);
            goto A;
            break;
        case 2:
            if(pastry == 0)
            {
                printf("Net positive.\n");
            }
            else
            {
                printf("Net negative.\n");
            }
        printf("bakeryname = %s\ntime = %f\nsoldenpastry = %f\nprice = %f\n", bakeryname, time, soldenpastry, price);
        goto A;
        break;
        case 3:
        printf("exit.\n");
        goto A;
        break;
        }
    }
}    