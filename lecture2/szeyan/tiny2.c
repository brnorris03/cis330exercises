//SzeYan
//CIS330
#include <stdio.h> /*needed for printf and getchar*/

int main() {
    char userInput;

    printf("Are you having a nice day? (y/n)? ");
    userInput = getchar();

    if (userInput == 'y') {
        printf("That's wonderful, so am I!\n");
    } else {
        printf("That sucks, just try again tomorrow.\n");
    }

    return 0;
}
