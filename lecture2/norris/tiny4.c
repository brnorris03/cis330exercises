#include <stdio.h>
#include <stdlib.h>

int main() 
{
    /* Maximum size of string for storing user input */
    const short maxBufSize = 20;
    
    /* String variable to store user input */
    char *userInput = (char *) malloc (maxBufSize * sizeof(char));                               

    printf("Are you having a nice day? (yes/no)? ");
    fgets ( userInput, 20, stdin );           
    
    if (strcmp(userInput,"yes\n") == 0) {
        printf("That's wonderful, so am I!\n");
    } else {
        printf("Oh well, just try again tomorrow.\n");
    }

    free(userInput);
    return 0;
}
