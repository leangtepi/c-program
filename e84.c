#include <stdio.h>
#include <stdlib.h>

// Structure to store student records
struct Student {
    char name[50];
    int score;
};

// Function to read student records from a file
void readStudentRecords(FILE *file, struct Student **students, int *numStudents) {
    // Assuming the file format is: name score
    while (fscanf(file, "%s %d", (*students)[*numStudents].name, &((*students)[*numStudents].score)) != EOF) {
        (*numStudents)++;
        *students = realloc(*students, (*numStudents + 1) * sizeof(struct Student));
    }
}

// Function to calculate statistics and display results
void calculateAndDisplay(struct Student *students, int numStudents) {
    int totalScore = 0;
    int maxScore = students[0].score;
    int minScore = students[0].score;

    // Calculate total score, maximum and minimum scores
    for (int i = 0; i < numStudents; i++) 
    {
        totalScore += students[i].score;
        if (students[i].score > maxScore)
            maxScore = students[i].score;
        if (students[i].score < minScore)
            minScore = students[i].score;
    }

    // Calculate average score
    float averageScore = (float)totalScore / numStudents;

    // Count students above average
    int aboveAverageCount = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].score > averageScore)
            aboveAverageCount++;
    }

    // Display results
    printf("Average Score: %.2f\n", averageScore);
    printf("Student with Highest Score: %s %d\n", students[maxScoreIndex].name, maxScore);
    printf("Student with Lowest Score: %s %d\n", students[minScoreIndex].name, minScore);
    printf("Number of Students Scoring Above Average: %d\n", aboveAverageCount);
}

int main() {
    FILE *file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student *students = malloc(sizeof(struct Student));
    int numStudents = 0;

    // Read student records from file
    readStudentRecords(file, &students, &numStudents);

    fclose(file);

    // Calculate statistics and display results
    calculateAndDisplay(students, numStudents);

    // Free allocated memory
    free(students);

    return 0;
}
