#include <stdio.h>
/* An increment function that doesn't return a value. */

struct Point {
  int x, y;
};

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

int main() {
	struct Point pt;

	printPoint(pt);

	movePoint_wrong(pt, 3);
	printf("After movePoint_wrong: ");
	printPoint(pt);

	movePoint (&pt, 3);
	printf("After movePoint: ");
	printPoint(pt);

	return 0;
}
