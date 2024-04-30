#include<stdio.h>

int main() {
    char bakeryname[20];
    int drinkquantity;
    int limit;
    int time;
    float pastryquantity;
    float pastryprice;
    float drinkprice;
    float totalofpastry;
    float totalofdrink;
    float quantity;
    float remainingpastry;
    float soldpastry;
    float totalpastry;
    float totalprice;
    float remaining;
    float total;
    int opt;
    
    while(1) {
        printf("1. Input\n2. Output\n3. Exit\n");
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
                    printf("Enter your pastry quantity: ");
                    scanf("%f", &pastryquantity);
                    printf("Enter the drink quantity: ");
                    scanf("%d", &drinkquantity);
                    printf("Enter the time: ");
                    scanf("%d", &time);
                    printf("Enter the sold pastry: ");
                    scanf("%f", &soldpastry);
                    printf("Enter the pastry price: ");
                    scanf("%f", &pastryprice);
                    printf("Enter the drink price: ");
                    scanf("%f", &drinkprice);
                    
                    totalpastry = time * 20;
                    printf("Total pastry: %.2f\n", totalpastry);
                    totalprice = totalpastry * pastryprice;
                    printf("Total price: %.2f\n", totalprice);
                    remainingpastry = totalpastry - soldpastry;
                    printf("Remaining pastry: %.2f\n", remainingpastry);
                    totalofpastry= pastryprice * pastryquantity; 
                    printf("totalofpastry = %.2f\n", totalofpastry);
                    totalofdrink = drinkprice * drinkquantity;
                    printf("totalofdrink = %.2f\n", totalofdrink);
                    total = totalofpastry + totalofdrink;
                    printf("total = %.2f\n", total);
                }
                break;
                
            case 2:
                if(remaining == 0) 
                {
                    printf("Net positive.\n");
                } 
                else 
                {
                    printf("Net negative.\n");
                }
                break;
                
            case 3:
                printf("Exit.\n");
                return 0;
                
            default:
                printf("Invalid option.\n");
        }
    }
}