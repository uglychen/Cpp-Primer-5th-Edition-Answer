#include<iostream>
int main()
{
	int sum = 0;
	int value = 0;
	std::cout << " please enter ctr+z" << std::endl;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << sum << std::endl;
	return 0;
}


