#include <stdio.h>
#include "point.h"
/* An increment function that doesn't return a value. */

void movePoint_wrong(struct Point p, const int dist) {
	p.x += dist;
	p.y += dist;
}

void movePoint(struct Point *p, const int dist) {
	p->x += dist; 	/* equivalent to (*p).x += dist; */
	p->y += dist; 	/* equivalent to (*p).y += dist; */
}

void printPoint(struct Point p) {
	printf("p.x = %d, p.y = %d\n", p.x, p.y);
}

