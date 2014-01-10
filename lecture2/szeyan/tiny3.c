//SzeYan
//CIS330
#include <stdio.h>   /* Needed for printf and fgets */

int main()
{
    /* Maximum size of string for storing user input */
    const short maxBufSize = 20; //const means it won't change. pre-processing before compiling.

    /* String variable to store user input */
    char userInput[maxBufSize];

    printf("Are you having a nice day? (yes/no)? ");
    //get multiple characters. (store to,char to take in, stream to take from)
    fgets ( userInput, maxBufSize, stdin );

    if (strcmp(userInput,"yes\n") == 0) {
        //If userInput == "yes" then strcmp would return 0
        printf("That's wonderful, so am I!\n");
    } else {
        printf("Oh well, just try again tomorrow.\n");
    }

    return 0;
}
