#include <stdio.h>

union Student {
    char name[50];
    int rollNumber;
    float marks[5];
};

int main() {
    union Student student;
    char Name[50];
    int roll, i;
    float total = 0, percentage;

    printf("Enter student's name: ");
    scanf("%s", Name);

    for (i = 0; i < 50; i++) {
        student.name[i] = Name[i];
    }

    printf("Enter roll number: ");
    scanf("%d", &roll);
    student.rollNumber = roll;

    printf("Enter marks for 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &student.marks[i]);
        total += student.marks[i];
    }

    percentage = (totalMarks / 500) * 100;

    printf("\nStudent Name: %s", Name);
    printf("\nRoll Number: %d", student.rollNumber);
    printf("\nTotal Marks: %.2f", total);
    printf("\nPercentage: %.2f%%\n", percentage);

    return 0;
}

