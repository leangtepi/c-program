#include<stdio.h>

int main() {
    int student_id = 0;
    char student_Name[20]= "";
    char student_gender[20] = "";
    char student_department[20]= "";

    int teacher_id = 0;
    char teacher_Name[20]= "";
    char teacher_gender[20] = "";
    char teacher_department[20]="";
    
    int opt;
    A:
    printf("1. Student Info\n2. Teacher Info\n3. Display\n4. Exit\nEnter option: ");
    scanf("%d", &opt);

    switch (opt) {
        case 1:
            printf("Enter id, Name, gender, department for student: ");
            scanf("%d %s %s %s", &student_id, student_Name, student_gender, student_department);
            goto A;
            break;
        case 2:
            printf("Enter id, Name, gender, department for teacher: ");
            scanf("%d %s %s %s", &teacher_id, teacher_Name, teacher_gender, teacher_department);
            goto A;
            break;
        case 3:
            printf("Student Info:\n");
            printf("id = %d\nName = %s\ngender = %s\ndepartment = %s\n", student_id, student_Name, student_gender, student_department);
            printf("Teacher Info:\n");
            printf("id = %d\nName = %s\ngender = %s\ndepartment = %s\n", teacher_id, teacher_Name, teacher_gender, teacher_department);
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
}
