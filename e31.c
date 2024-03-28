#include<stdio.h>
int main()
{
    int id;
    char AuthorName[20], bookname[20];
    float year, price;
    int opt;
    A:
    printf("1.Input\n2.display\n3.exit");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
            printf("Enter id, Author Name, bookname, year, price: ");
            scanf("%d %s %s %f %f", &id, AuthorName, bookname, &year, &price);
            goto A;
            break;
        case 2:
            printf("id = %d\nAuthorName = %s\nbookname = %s\nyear = %f\nprice = %f\n", id, AuthorName, bookname, year, price);
            goto A;
            break;
        case 3:
            printf("exiting program.\n");
            break;
        default:
            printf("Invalid option.\n");
    }
    printf("id:%d\n", id);
    printf("AuthorName: %s\n", AuthorName);
    printf("bookname:%s\n", bookname);
    printf("year:%f\n", year);
    printf("price:%f\n", price);
}