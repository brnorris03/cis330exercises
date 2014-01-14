#include <stdio.h>
/* An increment function that doesn't return a value. */

void increment_wrong(int x) {
	x++;
}

void increment(int *x) {
	(*x)++;
}

int main() {
	int y = 2;

	printf("y = %d\n", y);

	increment_wrong(y);
	printf("After increment_wrong: y = %d\n", y);

	increment (&y);
	printf("After increment: y = %d\n", y);

	return 0;
}
