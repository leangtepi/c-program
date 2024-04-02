#include<stdio.h>

int main()
{
    int student = 1;
    while(1)
    {
        printf("student: %d\n", student);
        student++;
        if(student == 3)
        {
            break;
        }
    }
}