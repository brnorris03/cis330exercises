/*
 * stringtest.c
 *
 *  Created on: Jan 16, 2014
 *      Author: norris
 */
#include <stdio.h>
#include <string.h>

#include "mystring.h"
#define MAXWORDS 30

int main(int argc, char *argv[]) {
	String inputStr;
	String words[MAXWORDS];
	char tmpBuffer[50];
	int i;

	printf("Please input a string: ");
	fgets(tmpBuffer, 50, stdin);
	initString( &inputStr, tmpBuffer );

	// Break it up into words
	int numWords = getWords( inputStr, words, MAXWORDS );

	printf("Number of words: %d\n", numWords);
	for (i = 0; i < numWords; ++i ) {
		printString( words[i] );
		freeString( &words[i] );
	}

	freeString( &inputStr );
}

