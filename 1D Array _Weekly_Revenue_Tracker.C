/*
Name : Elosy Mwendwa
Reg no :CT/101/G/26560/25
Description: Program to calculate total revenue 
*/




#include <stdio.h>

int main() {
    double revenue[7];     
    double total = 0.0;    
    double average;        
    int i;

    printf("=== Weekly Revenue Tracker ===\n");

    
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ksh", i + 1);

        if (scanf("%lf", &revenue[i]) != 1) {
            printf("Invalid input! Setting revenue to ksh0.00 for Day %d.\n", i + 1);
            revenue[i] = 0.0;

            while (getchar() != '\n');
        }

        total += revenue[i]; 
    }

    average = total / 7.0;

    printf("\n--- Weekly Summary ---\n");
    printf("Total Revenue: ksh%.2lf\n", total);
    printf("Average Daily Revenue: ksh%.2lf\n", average);

    return 0;
}