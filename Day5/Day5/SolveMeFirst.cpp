#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

//using namespace std;

int solveMeFirst(int a, int b);

int main()
{
	int num1, num2;
	int sum;
	std::cin >> num1 >> num2;
	sum = solveMeFirst(num1, num2);
	std::cout << sum << std::endl;

	system("pause");
	return 0;
}

int solveMeFirst(int a, int b)
{

	return (a + b);
}