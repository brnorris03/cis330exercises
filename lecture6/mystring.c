/*
 * mystring.c
 *
 *  Created on: Jan 16, 2014
 *      Author: norris
 */
#include <stddef.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

void initString(String *s, char *value) {
	if (value == NULL) {
		printf("Error: Trying to copy NULL pointer (char *).");
		return;
	}
	s->length = strlen(value);
	if (s->str == NULL)
		s->str = (char *) malloc (s->length * sizeof(char));
	strcpy(s->str,value);
}

void freeString(String *s) {
	if (s->str != NULL)
		free(s->str);
}

void printString(String s) {
	printf("%s\n", s.str);
}

int getWords(const String line, String *words, const int maxNumWords)
{
	char *token;
	int nWords = 0;

	token = strtok( line.str, " " );
	while ( token != NULL && nWords < maxNumWords ) {
		initString(&words[nWords++], token);
		token = strtok( NULL, " " );
	}
	return nWords;
}
