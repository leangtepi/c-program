#include<stdio.h>

int main()
{
    int id;
    char productname[20];
    float price;
    float quanlity;
    char section[20];
    float discount;
    float total;
    int opt;
    A:
    //==================================Process========================
    printf("1.Input\n2.Output\n3.Exit");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        //==================================input========================
            printf("Enter id:");
            scanf("%i", &id);
            printf("Enter productname:");
            scanf(" %s", productname);
            printf("Enter price:");
            scanf(" %f", &price);
            printf("Enter quanlity:");
            scanf("%f", &quanlity);
            printf("Enter section:");
            scanf(" %s", section);
            printf("Enter discount:");
            scanf(" %f", &discount);
            goto A;
            break;
        case 2:
            if(discount>0)
            {
                total = price * quanlity;
                discount = total - (total * discount)/100;
            }
            printf("id = %i\nproductname = %s\nprice = %f\nquanlity = %f\nsection = %s\ndiscount = %f\ntotal = %f", id, productname, price, quanlity, section, discount,total);
            goto A;
            break;
        case 3:
             break;
        default:
            printf("Invalid option\n");
    }



    //==================================output========================

    printf("id:%i\n", id);
    printf("productname:%s\n", productname);
    printf("price:%f\n", price);
    printf("quanlity:%f\n", quanlity);
    printf("section:%s\n", section);
    printf("discount:%f\n", discount);
}