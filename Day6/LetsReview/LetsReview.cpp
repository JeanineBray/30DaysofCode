#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>

int main()
{
	//Declaring variables.
	std::string S;
	int N, T, test;

	//Getting input from the end-user.
	std::cin >> T;

	//Creating for-loop.
	for (int j = 0; j < T; j++)
	{
		std::cin >> S;
		test = 1;
		N = S.size();
		for (int i = 1; i < N; i++)
		{
			if (abs(S[i]) - S[i-1] != abs(S[N-i] - S[N - i - 1]))
			{
				test = 0;
				break;
			}
		}
		if (test == 0)
		{
			std::cout << "Not Funny" << std::endl;
		}
		else
		{
			std::cout << "Funny" << std::endl;
		}
	}

	return 0;
}