/*
Name: Elosy Mwendwa
Registration no: CT101/G/26560/25
Description : Withdrawal balance
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        if (withdraw > balance) {
            printf("Insufficient balance! Current balance: %.2f\n", balance);
            continue;  // changed from break to continue
        }

        balance -= withdraw;

        if (balance > 0) {
            printf("Remaining balance: %.2f\n\n", balance);
        } else {
            printf("Insufficient balance! Current balance: %.2f\n", balance);
        }
    }

    printf("\nTransaction ended. Account balance: %.2f\n", balance);
    return 0;
}
