#include<stdio.h>
#include<string.h>

int main() {
    int id[20], limit, opt;
    char Name[20][20], status[20][10], department[20][20], major[20][20]; // Highlighted
    float math[20], english[20], total[20], average[20];

    printf("Enter the limit: ");
    scanf("%d", &limit);
    do {
        printf("1.input\n2.output\n3.average\n4.exit\n");
        scanf("%d", &opt);

        switch (opt) {
            case 1: 
                for(int i = 0; i < limit; i++) {
                    printf("Enter your id: ");
                    scanf("%d", &id[i]);
                    printf("Enter your name: ");
                    scanf("%s", Name[i]);
                    printf("Enter your department: ");
                    scanf("%s", department[i]);
                    printf("Enter your major: ");
                    scanf("%s", major[i]);
                    printf("Enter math and english score: ");
                    scanf("%f %f", &math[i], &english[i]);
                    total[i] = math[i] + english[i];
                    average[i] = total[i] / 2; // Highlighted: Calculate average based on the number of subjects
                }
                break;
            case 2:
                printf("ID\tName\tdepartment\tmajor\t\ttotal\taverage\tstatus\n");
                for(int i = 0; i < limit; i++) {
                    printf("%d\t%s\t%s\t%s\t\t%.2f\t%.2f\t%s\n", id[i], Name[i],department[i], major[i], total[i], average[i], status[i]);
                }
                break;
            case 3: 
                for(int i = 0; i < limit; i++) {
                    if(average[i] >= 50) {
                        strcpy(status[i], "pass");
                    } else {
                        strcpy(status[i], "fail");
                    }
                }
                break;
            case 4:
                printf("exit the program.\n");
                break;
            default:
                printf("Invalid option.\n");
        }
    } while(opt != 4); // Highlighted: Change the loop termination condition

    return 0;
}
