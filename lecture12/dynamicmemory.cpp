#include <iostream>

int main() {

	// Declare some pointers, allocate memory, and then free it

	// A pointer to a single int (not an array)
	int *intptr = new int;	 	// Dynamically allocate a single int
	*intptr = 3;
	std::cout << "*intptr = " << *intptr << std::endl;


	std::cout << "1-D array:" << std::endl;
	int *array = new int[10]; 	// Dynamically allocate a 1-D array of ints
	for (int i = 0; i < 10; i++) array[i] = 2*i;  // initialize
	for (int i = 0; i < 10; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;


	std::cout << "2-D array:" << std::endl;
	int **array2D; 				// Dynamically allocate a 2-D array of ints
	array2D = new int*[5];
	for (int i = 0; i < 5; i++) {
		array2D[i] = new int[5];
		for (int j = 0; j < 5; j++) {
			array2D[i][j] = i*5 + j;
			std::cout << array2D[i][j] << " ";
		}
		std::cout << std::endl;
	}

	// All done, deallocate memory
	delete intptr;
	delete []array;
	for (int i = 0; i < 5; i++) delete []array2D[i];
	delete []array2D;
}
