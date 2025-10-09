/*
Name :Elosy Mwendwa 
Registration no:CT101/G/26560/25
Description :Guessing game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));             
    secret = rand() % 20 + 1;   

    while (1) {
        printf("Enter your guess (1–20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else {
            printf("Congratulations! You guessed correctly in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}