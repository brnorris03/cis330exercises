#include <stdio.h>

double (*fptr) (int n, double x[]) = NULL;

double computeAverage(int n, double y[]) {
	double avg = 0.0;
	for (int i = 0; i < n; ++i) {
		avg += y[i];
	}
	return avg/n;
}

//...
int main() {
  double x[3] = {1.0,2.0,3.0};
  double avg = 0.0;

  fptr = &computeAverage;
  avg = (*fptr)(3,x);
  printf("Average: %f\n", avg);
}

