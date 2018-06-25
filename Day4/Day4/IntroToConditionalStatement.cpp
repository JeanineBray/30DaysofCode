//#include <bits/stdc++.h>
#include <iomanip>
#include <string>
#include <iostream>
#include <limits>

//using namespace std;



int main()
{
	//Declare data type and variable
		int N;

	//Receive input for declared variable
		std::cin >> N;

	//Rinse buffer
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	//Conditional statement
		if ((1 <= N) && (N <= 100))
			{
				if (N % 2 != 0)
				{
					std::cout << "Weird" << std::endl;
				}
				else if ((N % 2 == 0) && (2 <= N) && (N <= 5))
				{
					std::cout << "Not Weird" << std::endl;
				}
				else if ((N % 2 == 0) && (6 <= N) && (N <= 20))
				{
					std::cout << "Weird" << std::endl;
				}
				else if ((N % 2 == 0) && (20 <= N))
				{
					std::cout << "Not Weird" << std::endl;
				}
			}

			
	
		system("pause");
		return 0;
}
