#include<stdio.h>

struct student record
{
    int id;
    char name[50];
    float math, english, physic;
    float sum;
    float average;
    int numstudents = 20;
}s[50];

int i = 0;

void input();
void output();
float cal(float math, float english, float physic);
float average(float math, float english, float physic);

int main()
{
    whiel(1)
    {
        int opt;
        printf("1.input\n2.output\n3.calculate\n");
        scanf("%d", &opt);
        switch (opt)
        {
            case 1:
            input();
            break;
            case 2:
            output();
            break;
            case 3:
            calculate();
        }
        return 0;
    }
}
void input()
{
    while(1)
    {
        printf("Enter id(0 to exit): ");
        scanf("%d", &s[i].id);
        if(s[i].id == 0)
        {
            break;
        }
        printf("Enter your name: ");
        scanf("%s", s[i].name);
        printf("Enter math english and physic scores: ");
        scanf("%f %f %f\n", &s[j].math, &s[j].english, &s[j].physic);
        i++;
    }
}
void output()
{
    int sum = 0;
    int highestScore = students[0].score;
    int lowestScore = students[0].score;
    printf("The record of students: ");
    for(int j = 0; j < i; j++)
    {
        sum[j] += students[i].score;
        average[j] = average(float math, float english, float physic);
        printf("Average Score: %.2f\n", average);
        printf("Student with Highest Score: %d\n", highestScore);
        printf("Student with Lowest Score: %d\n", lowestScore);
        printf("Number of Students Above Average: %d\n", aboveAverage);
    }
}
float cal(float math, float english, float physic)
{
    sum[j] += math + english + physic;
    for (int i = 0; i < numStudents; i++) 
    {
        sum += students[i].score;
        if (students[i].score > highestScore) 
        {
            highestScore = students[i].score;
        }
        if (students[i].score < lowestScore) 
        {
            lowestScore = students[i].score;
        }
    }
}
float average(float math, float english, float physic)
{
    float average = (float)sum / s[i].numstudents;
    int aboveAverage = 0;
    for (int i = 0; i < s[i].numstudents; i++) 
    {
        if (s[i].sum > average)
        {
            aboveAverage++;
        }
    }
}