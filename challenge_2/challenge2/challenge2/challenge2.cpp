#include <iostream>
#include <iomanip>
#include <limits>
#include <string>



int main()
{
	int i = 4, num2;
	double d = 4.0, num3;
	std::string s = "HackerRank ", e;

	std::cin >> num2 >> num3;
	std::cin.ignore(256, '\n');
	std::getline(std::cin, e);

	std::cout << i + num2 << std::setprecision(1) << std::fixed << d + num3 << std::endl;

	system("pause");
	return 0;
}

