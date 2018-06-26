#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>

//using namespace std;

//Sum function prototype
	int max_of_four(int a, int b, int c, int d);

//Start function
	int main()
	{
		//Variable declaration
			int a, b, c, d;
		
		//Passing information by address, instead of by value
			scanf_s("%d %d %d %d", &a, &b, &c, &d);

		//Declaring the return variable and initializing it with the return value of
		//function 'max_of_four'. Then, printing out the result from the declared address.
			int ans = max_of_four(a, b, c, d);
			printf("%d", ans);
			std::cout << std::endl;

			system("pause");
			return 0;
	}

//Function definition
int max_of_four(int a, int b, int c, int d)
{
	int sum = 0;

	sum += a;
	sum += b;
	sum += c;
	sum += d;

	return sum;
}
