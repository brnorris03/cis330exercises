#include <iostream>
#include <iomanip>	// needed for setw and setfill
int main() {
	using namespace std;
	// Beep 6 times
	cout << "\a\a\a\a\a\a" << endl;

	// Fill a line with dashes
	cout << setfill('-') << setw(80) << "-" << endl;

	// Print some characters
	cout << "Hellox asfq";
	cout << "\b\b\b\b\b\b" << " world!" << endl;

	// Floating-point numbers
	const double a = 3.1415926534;
	const double b = 2006.0;
	const double c = 1.0e-10;

	cout.precision(5);

	cout << "default:\n";
	cout << a << '\n' << b << '\n' << c << '\n';

	cout << '\n';

	cout << "fixed:\n" << fixed;
	cout << a << '\n' << b << '\n' << c << '\n';

	cout << '\n';

	cout << "scientific:\n" << scientific;
	cout << a << '\n' << b << '\n' << c << '\n';
	return 0;
}
