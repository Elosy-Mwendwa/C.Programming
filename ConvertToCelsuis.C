/*
Name:Elosy Mwendwa 
Registration no:CT101/G/26560/25
Description:ConvertToCelsius
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(F));
    return 0;
}