#include <iostream>
#include <string>
#include <vector>


int sum(const std::vector<std::string> &v);
float sum_f(const std::vector<std::string> &v);

int main()
{
	std::vector<std::string> v = { "1", "2", "3", "4.5" };
	std::cout << sum(v) << std::endl;
	std::cout << sum_f(v)<<std::endl;
	return 0;
}


int sum(const std::vector<std::string> &v)
{
	int sum = 0;
	for (auto s : v)
	{
		sum += std::stoi(s);
	}

	return sum;
}


float sum_f(const std::vector<std::string> &v)
{
	float sum = 0.0;
	for (auto s : v)
	{
		sum += std::stof(s);
	}

	return sum;
}