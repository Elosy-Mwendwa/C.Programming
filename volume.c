//Simple c program (Elosy Mwendwa)
/*
Name: Elosy Mwendwa 
Reg no:CT101/G/26560/25
Date:23/9/2025
Description: Volume and surface area program
V=πr×r×h
S.A=(2πr×r)+(2πrh)
*/
#include <stdio.h>
#include <math.h>

    int main() {
    
        const float PI = 3.142;
        float radius, height, volume, surfaceArea;
        printf("Enter the radius of the cylinder:");
        scanf("%f",&radius);

        printf("Enter the height of the cylinder:");
        scanf("%f",& height);

        volume = PI * pow(radius, 2) * height;
        surfaceArea = 2 * PI * pow(radius, 2) + (2 * PI * radius * height);

        printf("Volume of the cylinder = %.2f\n", volume);
        printf("Surface area of the cylinder = %.2f\n", surfaceArea);

        return 0;
    }