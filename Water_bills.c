/*
Name:Elosy Mwendwa
registration no:CT101/G/26560/25
#include <stdio.h>
 * Program: water_bill.c
 * Task 2: Calculates the total water bill based on tiered consumption.
 */
int main() {
    int units;
    double total_bill = 0.0;

    printf("Enter water units consumed: "); 
    if (scanf("%d", &units) != 1) return 1;

       if (units < 0) {
        printf("Invalid input: Units consumed cannot be negative.\n");
        return 1;
    }
    
    if (units <= 30) {
    
        total_bill = units * 20.0;
    } else if (units <= 60) {
        
        total_bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        
        total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    
    printf("Total water bill: %.2f KES\n", total_bill); 

    return 0;
}