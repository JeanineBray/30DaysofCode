#include <iostream>
#include <cstdio>
#include <cmath>

double solve(double mealCost, int tipPercent, int taxPercent);

int main()
{
	double mealCost;
	int tipPercent, taxPercent;

	std::cin >> mealCost;
	std::cin >> tipPercent;
	std::cin >> taxPercent;

	solve(mealCost, tipPercent, taxPercent);

	system("pause");
	return 0;
}

double solve(double mealCost, int tipPercent, int taxPercent)
{
	double totalCost, tip, tax;

	tip = mealCost * tipPercent / 100;
	tax = mealCost * taxPercent / 100;

	totalCost = round(mealCost + tip + tax);

	std::cout << "The total meal cost is " << totalCost << " dollars." << std::endl;

	return totalCost;
}
