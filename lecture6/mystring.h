/*
 * mystring.h
 *
 *  Created on: Jan 16, 2014
 *      Author: norris
 */

#ifndef MYSTRING_H_
#define MYSTRING_H_

/* A helpful string data structure and a few operations */
typedef struct {
	int length;
	char* str;
} String;

void initString(String *s, char *value);

void freeString(String *s);

void printString(String s);

int getWords(const String line, String words[], const int maxNumWords);



#endif /* MYSTRING_H_ */
