/*
Name :Elosy Mwendwa 
Registration no:CT101/G/26560/25
Description:Fare
*/

#include <stdio.h>

float calculateFare(float distance){
     float fareRate =50.0;
     
     float totalFare = distance*fareRate;
     
     return totalFare;
     }
    
   int main() {
     float distance , fare ;
     
     printf("Enter distance travelled (in kilometers):");
     scanf("%f",&distance);
     
     fare = calculateFare (distance);
     
     printf("Total fare = Ksh .% 2f\n", fare);
     
     
    return 0;
}