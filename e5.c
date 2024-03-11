#include<stdio.h>
int main()
{
    int id;
    char Name[20];
    float balance ,inquiry;
    float Deposit;
    float Withdrawal;
    char Transaction_History[50];
    printf("Enter your id:");
    scanf("%i", &id);
    printf("Enter your Name:");
    scanf(" %s", Name);
    printf("Enter your balance ,inquiry:");
    scanf("%f", &balance ,inquiry);
    printf("Enter your Deposit:");
    scanf("%i", &Deposit);
    printf("Enter your Withdrawal:");
    scanf("%f", &Withdrawal);
    printf("Enter your Transaction_History:");
    scanf(" %s", &Transaction_History);
    printf("\n");
    printf("id:%i\n", id);
    printf("Name:%s\n", Name);
    printf("balance ,inquiry:%f\n",balance = balance - Withdrawal + Deposit);
    printf("Deposit:%i\n", Deposit);
    printf("Withdrawal:%f\n", Withdrawal);
    printf("Transaction,History:%s\n", Transaction_History);
    return 0;
    }