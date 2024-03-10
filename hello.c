#include <stdio.h>

int main() {
    int number = 0; // Initialize the counter
    char input; // Variable to store user input

    printf("Press 'i' to increase, 'd' to decrease, or 'q' to quit.\n");

    while(1) { // Infinite loop to keep the program running
        scanf(" %c", &input); // Read a single character from the user

        switch(input) {
            case 'i': // If 'i' is pressed, increase the counter
                number++;
                printf("Counter: %d\n", number);
                break;
            case 'd': // If 'd' is pressed, decrease the counter
                if(number > 0) { // Ensure the counter doesn't go below 0
                    number--;
                    printf("Counter: %d\n", number);
                }
                break;
            case 'q': // If 'q' is pressed, quit the program
                printf("Quitting...\n");
                return 0; // Exit the program
            default: // If any other character is pressed, ignore it
                printf("Invalid input. Try again.\n");
                break;
        }
    }

    return 0;
}
