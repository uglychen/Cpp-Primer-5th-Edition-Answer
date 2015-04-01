#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void f(int i)
{
	auto l = [&]()
	{
		i ? --i : i;
		return i == 0;
	};
}


int main()
{
	int count = 2;

	for (int i = 0; i != 5; ++i)
	{
		std::cout << ([&count](){
			count ? --count : count;
			return count == 0;
		}())
			<< std::endl;
	}

	return 0;
}
