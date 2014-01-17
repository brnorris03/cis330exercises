#include <stdio.h>

double (*fptr)(int n, double x[]) = NULL;

// A couple of functions that work on an array of doubles
double computeSum(int n, double y[]) {
	double sum = 0.0;
	printf("Sum: ");
	for (int i = 0; i < n; ++i) {
		sum += y[i];
	}
	return sum;
}

double computeAverage(int n, double y[]) {
	printf("Average: ");
	if (n != 0)
		return computeSum(n, y) / n;
	else {
		printf("Warning: Division by 0!");
		return 0.0;
	}
}

//...
int main() {
	const int length = 6;
	double result = 0.0;
	double x[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };

	// An array of function pointers
	double (*fptrArray[2]) (int n, double x[]);
	fptrArray[0] = &computeSum;
	fptrArray[1] = &computeAverage;

	for (int i = 0; i < 2; ++i) {
		result = fptrArray[i](length, x);
		printf("%f\n", result);
	}

}

