#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <list>
#include <set>
#include <utility>

using namespace std;

int main()
{
	std::map<std::string, std::vector<int>> m;

	std::pair<std::string, std::vector<int>>    pair1{ "chen", { 1, 2, 3, 4, 5, 6 } };

	std::pair<std::map<std::string, std::vector<int>>::iterator, bool>  it;

	it = m.insert(pair1);

	for (const auto e : m)
	{
		std::cout << e.first << endl;
		for (const auto &l : e.second)
			std::cout << l << endl;
		std::cout << endl;
	}

	return 0;
}

