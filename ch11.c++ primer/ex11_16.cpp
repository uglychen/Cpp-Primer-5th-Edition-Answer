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
	std::map<int, std::string> m;
	m[100] = "chen";
	map<int, string>::iterator it = m.begin();

	it->second = "xun";
	cout << it->second;

	return 0;
}

