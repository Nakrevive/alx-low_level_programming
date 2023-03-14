#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) { // Check for correct number of arguments
        printf("Error\n");
        return 1;
    }
    int cents = atoi(argv[1]); // Parse the argument as an integer
    if (cents < 0) { // Check for negative value
        printf("0\n");
        return 0;
    }
    int num_coins = 0; // Initialize counter for number of coins
    while (cents > 0) { // Keep making change until no more coins are needed
        if (cents >= 25) { // Check for quarters
            cents -= 25;
            num_coins++;
        } else if (cents >= 10) { // Check for dimes
            cents -= 10;
            num_coins++;
        } else if (cents >= 5) { // Check for nickels
            cents -= 5;
            num_coins++;
        } else if (cents >= 2) { // Check for pennies
            cents -= 2;
            num_coins++;
        } else { // Only 1 cent is left
            cents--;
            num_coins++;
        }
    }
    printf("%d\n", num_coins); // Print the minimum number of coins
    return 0;
}

