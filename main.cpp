#include <iostream>
#include <string>

// Lab 3 - Andy Munoz
// CIS 5 Week 03 - Types and Variables

int main() {
	const int CURRENT_YEAR = 2026;
	std::string name = "Andy Munoz";
	int age = 19;
	double height = 1.75;
	char initial = 'A';
	bool student = true;

	std::cout << "Name: " << name << "\nHeight (m): " << height << "\nInitial: " << initial << "\nStudent: " << student << "\nYear: " << CURRENT_YEAR;
	return 0;
}
