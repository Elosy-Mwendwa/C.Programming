/* 
Name :Elosy Mwendwa
Registration no: CT101/G/26560/25
Description : Room occupacy 

*/

#include <stdio.h>


int main() {
    int occupancy[5][10]; 
    int floor_occupied[5] = {0};
    int floor_vacant[5] = {0};   
    
    srand(time(NULL));
    
    printf("=== Room Occupancy - Single Branch ===\n\n");
    
    printf("Generating random occupancy data...\n");
    for(int floor = 0; floor < 5; floor++) {
        for(int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
        }
    }
    
    for(int floor = 0; floor < 5; floor++) {
        for(int room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1) {
                floor_occupied[floor]++;
            } else {
                floor_vacant[floor]++;
            }
        }
    }
    
    printf("\n--- Occupancy Report ---\n");
    printf("Floor\tOccupied\tVacant\n");
    printf("-----\t--------\t------\n");
    
    int total_occupied = 0, total_vacant = 0;
    for(int floor = 0; floor < 5; floor++) {
        printf("%d\t%d\t\t%d\n", floor + 1, floor_occupied[floor], floor_vacant[floor]);
        total_occupied += floor_occupied[floor];
        total_vacant += floor_vacant[floor];
    }
    
    printf("-----\t--------\t------\n");
    printf("Total\t%d\t\t%d\n", total_occupied, total_vacant);
    
    printf("\n--- Room Grid (1=Occupied, 0=Vacant) ---\n");
    printf("Floor\\Room ");
    for(int room = 0; room < 10; room++) {
        printf("%2d ", room + 1);
    }
    printf("\n");
    
    for(int floor = 0; floor < 5; floor++) {
        printf("Floor %d:   ", floor + 1);
        for(int room = 0; room < 10; room++) {
            printf(" %d ", occupancy[floor][room]);
        }
        printf("\n");
    }
    
    return 0;
}