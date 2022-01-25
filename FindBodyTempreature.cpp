
#include <iostream>

int main()
{
	float userTempreature;
	std::cout << "Enter your body tempreature in celsius :" << std::endl;
	std::cin >> userTempreature;
	if (userTempreature > 41)
	{
		std::cout << "Very high fever";
	}
	else if (userTempreature > 39.5 && userTempreature <= 41)
	{
		std::cout << "High fever";
	}
	else if (userTempreature >= 38 && userTempreature <= 39.5)
	{
		std::cout << "fever";
	}
	else if (userTempreature >= 37.5 && userTempreature < 38)
	{
		std::cout << "elevated body tempreature";
	}
	else
	{
		std::cout << "your tempreature lower than 37.5";
	}
	return 0;
}
