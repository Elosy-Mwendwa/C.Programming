/*
    Name: Elosy Mwendwa
    Reg No: CT101/G/26560/25 
    Program: exam_eligibility.c
    Description: Checks if a student is eligible for final exams.
 */
 
 #include <stdio.h>
 
int main() {

    float attendance_percent;
    int average_marks;

    printf("Enter student's attendance percentage: ");
    scanf("%f", &attendance_percent);

    printf("Enter student's average marks: ");
    scanf("%d", &average_marks);

    if (attendance_percent >= 75.0 && average_marks >= 40) {
        printf("\nStudent is eligible for final exams.\n");
    } 
    else {
    
        printf("\nNot eligible.\n"); 
    }

    return 0;
}