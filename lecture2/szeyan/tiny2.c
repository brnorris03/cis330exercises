//SzeYan
//CIS330
#include <stdio.h> /*needed for printf and getchar*/

int main() {
    char userInput;
    char userInput2;

    printf("Are you having a nice day? (y/n)? ");
    userInput = getchar();
    getchar(); /* Throw away the newline */
    printf("Are you older than 21? (y/n)? ");
    userInput2 = getchar();
    //getchar(); /* Throw away the newline */

    if (userInput == 'y') {
        printf("\nThat's wonderful, so am I!\n");
    } else {
        printf("That sucks, just try again tomorrow.\n");
    }

    if(userInput2 == 'y'){
        printf("\nThat's cool.\n");
    }else{
        printf("Wow, so young.\n");
    }

    return 0;
}
