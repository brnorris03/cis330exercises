//SzeYan
//CIS330
#include <stdio.h>   /* Needed for printf and fgets */

int main()
{
    /* String variable to store user input */
    char userInput[20];

    printf("Are you having a nice day? (yes/no)? ");
    fgets ( userInput, 20, stdin );

    if (strcmp(userInput,"yes\n") == 0) {
        //If userInput == "yes" then strcmp would return 0
        printf("That's wonderful, so am I!\n");
    } else {
        printf("Oh well, just try again tomorrow.\n");
    }

    return 0;
}
