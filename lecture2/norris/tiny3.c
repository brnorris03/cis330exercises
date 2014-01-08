#include <stdio.h>

int main() 
{
    /* String variable to store user input */
    char userInput[20];                               

    printf("Are you having a nice day? (yes/no)? ");
    fgets ( userInput, 20, stdin );           
    
    if (strcmp(userInput,"yes\n") == 0) {
        printf("That's wonderful, so am I!\n");
    } else {
        printf("Oh well, just try again tomorrow.\n");
    }

    return 0;
}
