#include <stdio.h>

int main() {
    int sum_even = 0;
    char user_input;

    while (1) {
        int num;
        printf("Enter an integer: ");

        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter an integer.\n");

            // Clear input buffer
            while (getchar() != '\n');
            
            continue;
        }

        if (num % 2 == 0) {
            sum_even += num;
        }

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &user_input);

        if (user_input != 'Y' && user_input != 'y' && user_input != 'N' && user_input != 'n') {
            printf("Invalid input. Continuing loop.\n");
        } else if (user_input == 'N' || user_input == 'n') {
            break;
        }
    }

    printf("Sum of even integers: %d\n", sum_even);

    return 0;
}