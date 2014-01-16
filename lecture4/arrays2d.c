#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int*** biggerfoo() {

  int ***numbers;
  const int d1 =2, d2=5, d3=4;
  int i, j;

  numbers = (int ***) malloc ( d1 * sizeof(int **) );
  for (i = 0; i < d2; i++) {
    numbers[i] = (int **) malloc ( d2 * sizeof(int *) );
    for (j = 0; j < d3; j++) {
      numbers[i][j] = (int *) malloc ( d3 * sizeof(int) );
      memset(numbers[i][j], 0, d3 * sizeof(int));
    }
  }
  return numbers;
}

int** allocate2DArray (const int numRows, const int numColumns, int ***arrayptr) {
  int staticNumbers[numRows][numColumns];
  int **numbers;
  int i, j;

  // Allocate the numRows pointer values
  *arrayptr = (int **) malloc ( numRows * sizeof(int *) );

  // Create an alias to *arrayptr so we don't have to keep dereferencing it:
  numbers = *arrayptr;    

  // For each row pointer, allocate the memory that will be storing the ints
  for (i = 0; i < numRows; i++) {
    numbers[i] = (int *) malloc ( numColumns * sizeof(int) );
    memset(numbers[i], 0, numColumns * sizeof(int));
  }
 
  //return staticNumbers;  // WRONG
  return numbers; // OK, this is the same as "return *arrayptr;"
}

void updateSum(int *sum, int newsum){
  *sum = newsum; 
}

void cleanup2DArray(const int nr, int ***array) {
  int i;
  for (i = 0; i < nr; i++) 
    free((*array)[i]);
  free(*array);
}

// Lots of other code in other files

int main() {

  int i, j;
  const int nrows=3, ncols=3;
  int **myarray;
  int sum, tmpsum = 0;

  allocate2DArray(nrows, ncols, &myarray);

  for (i = 0; i < nrows; i++) {
    for (j = 0; j < ncols; j++) {
      tmpsum += myarray[i][j];
    }
  }
  updateSum(&sum, tmpsum);

  cleanup2DArray(nrows, &myarray);
  return 0;
}
