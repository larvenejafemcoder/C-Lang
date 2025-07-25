#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    int age;

    printf("Enter your age, mate!\n");

    while (1) {
        printf("_ ");
        fgets(input, sizeof(input), stdin);

        // Check if input is just a newline (empty)
        if (strcmp(input, "\n") == 0) {
            printf("You entered nothing! Try again.\n");
            continue;
        }

        // Try to parse the int
        if (sscanf(input, "%d", &age) == 1) {
            break;
        } else {
            printf("Invalid input! Please enter a whole number like 16 or 17.\n");
        }
    }

    printf("Oh, so you're %d years old!\n", age);
    return 0;
}
