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
	map<string, vector<string>> famls;
	string fam_name, chil_name;

	while (cin >> fam_name)
	{
		while (cin >> chil_name)
			famls[fam_name].push_back(chil_name);
	}

	for (auto e : famls)
	{
		cout << e.first << " ";
		for (auto v : e.second)
			cout << v << " ";
		cout << endl;
	}

}
