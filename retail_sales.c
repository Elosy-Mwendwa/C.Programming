#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float sale, total = 0.0;
    int choice;

    fp = fopen("sales.txt", "a+");
    if (fp == NULL) {
        printf("Error creating file.\n");
        exit(1);
    }

    printf("1. Add sale\n2. View total sales\nChoose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter sale amount: ");
        scanf("%f", &sale);
        fprintf(fp, "%.2f\n", sale);
        printf(" Sale recorded.\n");
    } 
    else if (choice == 2) {
        rewind(fp);
        while (fscanf(fp, "%f", &sale) == 1)
            total += sale;
        printf(" Total sales for the day: %.2f\n", total);
    } 
    else {
        printf("Invalid choice.\n");
    }

    fclose(fp);
    return 0;
}
