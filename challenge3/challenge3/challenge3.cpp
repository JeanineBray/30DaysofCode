#include <iostream>



int main()
{
	//Here I am defining the variables I intend to use throughout my lines of code
	double mealCost, tip, tax;
	int tipPercent, taxPercent, totalCost;

	//Receive input from the end-user.
	std::cin >> mealCost;
	std::cin >> tipPercent;
	std::cin >> taxPercent;

	//Next will be my calculations
	tip = (mealCost*tipPercent / 100);
	tax = (mealCost*taxPercent / 100);

	totalCost = tip + tax + mealCost;

	std::cout << "The total meal cost is " << totalCost << " dollars.";

	system("pause");
	return 0;
}