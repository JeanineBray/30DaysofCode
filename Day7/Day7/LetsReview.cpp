#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	int T;
	std::string S1, S2, S;

	std::cin >> T;

	while (T--)
	{
		int i = 0;

		std::cin >> S;

		S1 = "";
		S2 = "";

		int l = S.length();

		while (i<l)
		{
			if (i % 2 == 0)
				S2 += S[i];
			else
				S1 += S[i];
			i++;
		}
		std::cout << S2 << " " << S1 << "\n";
	}
	system("pause");
	return 0;
}