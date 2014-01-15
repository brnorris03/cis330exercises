#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "point.h"


struct TableItem {
	int row;
	char label[20];
	union {
		char c;
		int i;
		char *s;
		double d;
		struct Point *p;
	} value;
};


int main() {
	struct TableItem table[5]; // A table with 5 items
	struct Point aPoint = {2,3};  // An initialized point
	char someString[20] = "Hello world!";

	// Populate table, one item at a time to illustrate the union

	table[0].row = 0;
	strcpy(table[0].label, "A character");
	table[0].value.c = (char) '$';  // table[0].value is now a character
	printf("%d: %s, %c \t(table element size: %d)\n", table[0].row, table[0].label,
			table[0].value.c, (int)sizeof(table[0]));

	table[1].row = 0;
	strcpy(table[1].label, "A string");
	table[1].value.s = (char*) someString;
	printf("%d: %s, %s \t(table element size: %d)\n", table[1].row, table[1].label,
			table[1].value.s, (int)sizeof(table[1]));

	table[2].row = 0;
	strcpy(table[2].label, "A point");
	table[2].value.p = &aPoint;
	printf("%d: %s, (%d,%d) \t(table element size: %d)\n", table[2].row, table[2].label,
			table[2].value.p->x, table[2].value.p->y, (int)sizeof(table[2]));

	table[3].row = 0;
	strcpy(table[3].label, "An integer");
	table[3].value.i = 100;
	printf("%d: %s, %d \t(table element size: %d)\n", table[3].row, table[3].label,
			table[3].value.i, (int)sizeof(table[3]));


	table[4].row = 0;
	strcpy(table[4].label, "A double");
	table[4].value.d = 3.1415;
	printf("%d: %s, %f \t(table element size: %d)\n", table[4].row, table[4].label,
			table[4].value.d, (int)sizeof(table[4]));

}







