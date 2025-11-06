
#include <stdio.h>
#include <stdlib.h>

void write_input_file() {
    FILE *file_ptr;
    int number, i;

    file_ptr = fopen("input.txt", "w");

    if (file_ptr == NULL) {
        perror("Error opening input.txt for writing");
        exit(EXIT_FAILURE);
    }
    printf("--- Task 1: Writing 10 Integers to 'input.txt' ---\n");
    for (i = 0; i < 10; i++) {
        printf("Enter integer %d of 10: ", i + 1);
        if (scanf("%d", &number) != 1) {
            printf("Invalid input. Terminating.\n");
            fclose(file_ptr);
            exit(EXIT_FAILURE);
        }
        fprintf(file_ptr, "%d\n", number);
    }

    fclose(file_ptr);
    printf("'input.txt' successfully created and populated.\n");
}

void process_data_and_write_output() {
    FILE *input_file, *output_file;
    int number, count = 0;
    long long sum = 0;
    double average;

    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");

    if (input_file == NULL) {
        perror("Error opening input.txt for reading");
        exit(EXIT_FAILURE);
    }
    if (output_file == NULL) {
        perror("Error opening output.txt for writing");
        fclose(input_file);
        exit(EXIT_FAILURE);
    }
    printf("\n--- Task 2: Processing Data from 'input.txt' and Writing to 'output.txt' ---\n");
    
    while (fscanf(input_file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    if (count > 0) {
        average = (double)sum / count;

        fprintf(output_file, "Total numbers read: %d\n", count);
        fprintf(output_file, "Sum of the numbers: %lld\n", sum);
        fprintf(output_file, "Average of the numbers: %.2f\n", average);
        printf("Processing complete. Sum and Average written to 'output.txt'.\n");
    } else {
        fprintf(output_file, "No integers found in input.txt.\n");
        printf("Warning: No data processed.\n");
    }

    fclose(input_file);
    fclose(output_file);
}

void display_file_contents() {
    FILE *file_ptr;
    int c;

    printf("\n--- Task 3: Displaying File Contents ---\n");

    file_ptr = fopen("input.txt", "r");
    if (file_ptr == NULL) {
        perror("Error opening input.txt for display");
        return;
    }
    printf("\n**Content of input.txt:**\n");
    printf("---------------------------\n");
    while ((c = fgetc(file_ptr)) != EOF) {
        putchar(c);
    }
    printf("---------------------------\n");
    fclose(file_ptr);

    file_ptr = fopen("output.txt", "r");
    if (file_ptr == NULL) {
        perror("Error opening output.txt for display");
        return;
    }
    printf("\n**Content of output.txt:**\n");
    printf("---------------------------\n");
    while ((c = fgetc(file_ptr)) != EOF) {
        putchar(c);
    }
    printf("---------------------------\n");
    fclose(file_ptr);
}

int main() {
    write_input_file();
    process_data_and_write_output();
    display_file_contents();

    printf("\nProgram finished successfully.\n");
    return 0;
}