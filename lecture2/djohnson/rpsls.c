// 
//  rpsls.c
//
//  This is the homework assignment extended to include lizard and spock
//
//  Created by Daniel R Johnson on 1/9/14.
//  Copyright (c) 2014 Daniel R Johnson. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define BUFFERSIZE 10                                //this sets the buffer size used for user input
                                                     //(I made is small but adequate, which is poor for security but good for performance)
char* getUserChoice() {
    char userChoice[BUFFERSIZE],*copy;               // creates a string for user input of length BUFFERSIZE defined above
    /* Prompt the user "Enter rock, paper, or scissors: " and return
     the string they enter */
Input:                                      // label for jump if validation fails
    puts("Enter rock, paper, scissors lizard or spock: ");// prompt
    scanf( "%s",userChoice);                // get input
    if (!((strcmp(userChoice,"rock") == 0) 
    	|| (strcmp(userChoice, "paper") == 0) 
    	|| (strcmp(userChoice,"scissors") ==0)
    	|| (strcmp(userChoice,"lizard") ==0)
    	|| (strcmp(userChoice,"spock") ==0))){
        printf("That neither rock, paper, scissors, lizard nor spock! \n");    // invalid input!
        goto Input;
    }
    copy = malloc(strlen(userChoice)+1);    // allocate memory for user choice (deallocated in main())
    strcpy(copy,userChoice);                // copies user choice to allocated spot in memory
    return copy;
}

char* getComputerChoice() {
    srand (time(NULL));
    /* get a pseudo-random integer between 0 and 2 (inclusive) */
    int randChoice = rand() % 5;
    /* If randChoice is 0, return "rock", otherwise if randChoice is 1,
     return "paper", and if randChoice is 2, return "scissors". */
    if (randChoice == 0){
        return "rock";
    }
    else if (randChoice == 1){
        return "paper";
    }
    else if (randChoice == 2){
        return "scissors";
    }
    else if (randChoice == 3){
        return "lizard";
    }
    else{                                               //if randChoice != 0 or 1 than it is 2
        return "spock";
    }
}

char* compare(char* choice1, char* choice2)
{
    /* Implement the logic of the game here. If choice1 and choice2
     are equal, the result should be "This game is a tie."
     
     Make sure to use strcmp for string comparison.
     */
    if (strcmp(choice1,choice2)==0){                    // if the strings match it's a tie
        return "This game is a tie.";                   // if it isn't a tie then there is a clear winner, see below
    }
    else if (strcmp(choice1,"rock") == 0){              
        if (strcmp(choice2, "scissors") == 0){          
            return "Rock crushes scissors! You win.";   
        }
        else if (strcmp(choice2, "lizard") == 0){      
            return "Rock crushes lizard! You win.";   
        }
        else if (strcmp(choice2, "spock") == 0){                  
            return "Spock vaporizes rock! You lose.";      
        }
        else {                                          
            return "Paper covers rock! You lose.";
        }
    }
    else if (strcmp(choice1,"paper") == 0){              
        if (strcmp(choice2, "rock") == 0){          
            return "Paper covers rock! You win.";   
        }
        else if (strcmp(choice2, "spock") == 0){      
            return "Paper disproves spock! You win.";   
        }
        else if (strcmp(choice2, "scissors") == 0){                  
            return "scissors cut paper! You lose.";      
        }
        else {                                          
            return "Lizard eats paper! You lose.";
        }
    }
    else if (strcmp(choice1,"scissors") == 0){              
        if (strcmp(choice2, "paper") == 0){          
            return "Scissors cut paper! You win.";   
        }
        else if (strcmp(choice2, "lizard") == 0){      
            return "Scissors decapitate lizard! You win.";   
        }
        else if (strcmp(choice2, "spock") == 0){                  
            return "Spock smashes scissors! You lose.";      
        }
        else {                                          
            return "Rock crushes scissors! You lose.";
        }
    }
    else if (strcmp(choice1,"lizard") == 0){              
        if (strcmp(choice2, "spock") == 0){          
            return "Lizard poisons spock! You win.";   
        }
        else if (strcmp(choice2, "paper") == 0){      
            return "Lizard eats paper! You win.";   
        }
        else if (strcmp(choice2, "scissors") == 0){                  
            return "Scissors decapitate! You lose.";      
        }
        else {                                          
            return "Rock crushes lizard! You lose.";
        }
    }
    else if (strcmp(choice1,"spock") == 0){              
        if (strcmp(choice2, "scissors") == 0){          
            return "Spock smashes scissors! You win.";   
        }
        else if (strcmp(choice2, "rock") == 0){      
            return "Spock vaporizes rock! You win.";   
        }
        else if (strcmp(choice2, "lizard") == 0){                  
            return "Lizard poisons spock! You lose.";      
        }
        else {                                          
            return "Paper disproves spock! You lose.";
        }
    }
    else{ return "Game logic was unsuccessful";}        //***this will be the message you get if none of the if statements hold true***
}
unsigned char playAgain(){                              // This function returns a boolean value, since C has no booleans I used a char since it is only 1 byte
    char input[BUFFERSIZE];
    puts("Would you like to play again?");              // prompt
    scanf("%s",input);                                  // sets input to users answer
    if ((strcmp(input,"y") == 0) || (strcmp(input,"Y") == 0) || (strcmp(input,"yes") == 0) || (strcmp(input,"YES") == 0)){
        return 1;                                       // true output if input matches one of the Yes options
    }
    else{
        return 0;                                       // else false output (0)
    }
}


int main(int argc, char** argv)
{
    char *userChoice, *computerChoice, *outcome;            // create strings for user computer choices and game outcome
    do{
        userChoice = getUserChoice();                       // assign userChoice to string saved to memory in getUserChoice() (on heap)
//      printf("%s\n",userChoice);                          // print userChoice (for debugging)
        computerChoice = getComputerChoice();               // assign computerChoice to string output of getComputerChoice()
    
        outcome = compare(userChoice, computerChoice);      // set outcome to string returned by compare()
    
        printf("You picked %s.\n", userChoice);             // print userChoice
        printf("Computer picked %s.\n\n", computerChoice);  // print computerChoice
        printf("%s\n", outcome);                            // print game outcome
        free(userChoice);                                   // deallocate heap space allocated in getUserChoice()
    }while (playAgain());                                   // loop while the player wants to play again
    return 0;
}