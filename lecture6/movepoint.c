#include <stdio.h>
#include "point.h"
/* An increment function that doesn't return a value. */

void movePoint_wrong(Point p, const int dist) {
	p.x += dist;
	p.y += dist;
}

void movePoint(Point *p, const int dist) {
	p->x += dist; 	/* equivalent to (*p).x += dist; */
	p->y += dist; 	/* equivalent to (*p).y += dist; */
}

void printPoint(Point p) {
	printf("p.x = %d, p.y = %d\n", p.x, p.y);
}

