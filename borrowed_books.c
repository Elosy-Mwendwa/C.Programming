#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error creating file.\n");
        exit(1);
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title);
    fclose(fp);

    printf("✅ Book title successfully stored in borrowed_books.txt\n");
    return 0;
}
