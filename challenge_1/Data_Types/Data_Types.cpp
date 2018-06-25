#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

//using namespace std;

int main()
{
		int i = 4;
		double d = 4.0;
		std::string s = "HackerRank ";

	// Declare second integer, double, and String variables.
		int b;
		double c;
		std::string e;

	// Read and save an integer, double, and String to your variables.
	// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
		std::cin >> b;
		std::cin >> c;
		std::getline(std::cin >> std::ws, e);

	// Print the sum of both integer variables on a new line.
		std::cout << (i + b) << std::endl;

	// Print the sum of the double variables on a new line.
		std::cout.precision(1);
		std::cout << std::fixed << (d + c) << std::endl;

	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.
		std::cout << (s + e) << std::endl;

		system("pause");
		return 0;
}