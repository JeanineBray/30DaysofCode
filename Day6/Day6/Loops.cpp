#include <iostream>
#include <limits>
#include <cmath>


int main()
{
	//Declaring my variables.
	int n, result;

	//Taking in input from the console for said variable.
	std::cin >> n;

	//Rinse buffer.
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	

	//For loop to print out 10 lines of code.
	for (int i = 1; i <= 10; i++)
	{
		result = n * i;
		std::cout << n << " x " << i << " = " << result <<std::endl;
	}

	system("pause");
	return 0;
}