/*
 * thematrix.cpp
 *
 *  Created on: Feb 11, 2014
 *  Adapted from: http://xoax.net/cpp/crs/misc/lessons/TheMatrixEffect/
 *  Author: norris
 */

#include <iostream>
#include <iomanip>
#include <ostream>
#include <cstdlib> 	  // for rand()
#include <pthread.h>  // for sleep(int)

// A nice Color class to hide the nastiness of changing terminal colors (bash)
namespace Color {
    class Modifier {
        int code;
    public:
        Modifier(int pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const Modifier& mod) {
            return os << "\e[38;5;" << mod.code << "m";
        }
    };
    // different shades of green and 15 for white,
    // see http://misc.flogisoft.com/bash/tip_colors_and_formatting
    int codes[11] = {10,15,22,23,28,34,70,71,76,82,118};
}


char getChar(int iGenerator, char cBase, int iRange) {
	return (cBase + iGenerator % iRange);
}

int main() {
	using namespace std;

    	int i = 0;
	char caRow[80];
	int j = 7;
	int k = 2;
	int l = 5;
	int m = 1;
	while (true) {
		int i = 0;
		// Output a random row of characters
		while (i < 80) {
			if (caRow[i] != ' ') {
				caRow[i] = getChar(j + i*i, 33, 30);
				// Random shade of green
				cout << Color::Modifier(Color::codes[rand() % 11]);
			}
			cout << caRow[i++];
		}
		cout << endl;
		// Manage streaks
		j = (j + 31);
		k = (k + 17);
		l = (l + 47);
		m = (m + 67);
		caRow[j % 80] = '-';
		caRow[k % 80] = ' ';
		caRow[l % 80] = '-';
		caRow[m % 80] = ' ';
		// Delay (in seconds)
		sleep(.3);
	}
}



