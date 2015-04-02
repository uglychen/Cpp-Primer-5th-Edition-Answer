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
	std::map<int, int> m;
	m[0] = 1;

	for (const auto e : m)
		std::cout << e.first << " " << e.second << endl;

	//vector<int> v;
	//v[0] = 1;

	//for (const auto e : v)
	//	std::cout << e << endl;

	map<int, string> my_map = { { 1, "chen" }, { 2, "xun" } };

	map<int, string>::key_type  my_key = 1;

	map<int, string>::mapped_type  my_value = my_map[my_key];

	return 0;
}
