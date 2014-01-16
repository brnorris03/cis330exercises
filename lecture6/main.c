#include <stdio.h>
#include "point.h"
/* An increment function that doesn't return a value. */

int main() {
	/* Note that we don't say "struct" any more when we use the Point type */
	Point pt;

	pt.x = 0;
	pt.y = 0;
	printPoint(pt);

	movePoint_wrong(pt, 3);
	printf("After movePoint_wrong: ");
	printPoint(pt);

	movePoint (&pt, 3);
	printf("After movePoint: ");
	printPoint(pt);

	return 0;
}
