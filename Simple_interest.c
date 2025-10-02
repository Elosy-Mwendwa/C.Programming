/*
Name: Elosy Mwendwa
Registration number:
Date: 26/9/2025
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;
    int n;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    simpleInterest = (principal * rate * time) / 100.0;

    amount = principal * pow((1 + (rate / (100 * n))), n * time);
    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
 }

    