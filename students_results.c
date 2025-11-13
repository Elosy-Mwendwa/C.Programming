#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int choice;

    fp = fopen("results.dat", "ab+");
    if (fp == NULL) {
        printf("Error creating file.\n");
        exit(1);
    }

    printf("1. Add student record\n2. View records\nChoose: ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1) {
        printf("Enter name: ");
        fgets(s.name, sizeof(s.name), stdin);
        printf("Enter registration number: ");
        scanf("%d", &s.regNo);
        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(struct Student), 1, fp);
        printf("✅ Record added successfully.\n");
    } 
    else if (choice == 2) {
        rewind(fp);
        printf("\nName\t\tRegNo\tMarks\n----------------------------------\n");
        while (fread(&s, sizeof(struct Student), 1, fp))
            printf("%s\t%d\t%.2f\n", s.name, s.regNo, s.marks);
    } 
    else {
        printf("Invalid choice.\n");
    }

    fclose(fp);
    return 0;
}
