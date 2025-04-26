#include <stdio.h>

int main() {
    int matchsticks = 21, user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: You can pick 1, 2, 3, or 4 matchsticks.\n");
    printf("Whoever picks the last matchstick loses the game.\n\n");

    while (matchsticks > 1) {
        // User's turn
        printf("There are %d matchsticks left.\n", matchsticks);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        // Validate user input
        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid choice! Please pick between 1 and 4 matchsticks.\n");
            continue;
        }

        // Update matchsticks after user's turn
        matchsticks -= user_pick;

        // Check if user lost
        if (matchsticks == 1) {
            printf("\nYou are forced to pick the last matchstick. You lose!\n");
            break;
        }

        // Computer's turn
        computer_pick = 5 - user_pick; // The computer's strategy
        printf("Computer picks %d matchstick(s).\n", computer_pick);

        // Update matchsticks after computer's turn
        matchsticks -= computer_pick;

        // Check if computer lost
        if (matchsticks == 1) {
            printf("\nComputer is forced to pick the last matchstick. You win!\n");
            break;
        }
    }

    return 0;
}
