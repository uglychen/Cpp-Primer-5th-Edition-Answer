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
	map<string, vector<pair<string, string>>> famls;
	string fam_name, chil_name, birthday;

	while (cin >> fam_name)
	{
		while (cin >> chil_name&&cin >> birthday)
			famls[fam_name].push_back({ chil_name, birthday });
	}

	for (auto e : famls)
	{
		cout << e.first << " ";
		for (auto v : e.second)
			cout << v.first << " "<<v.second<<" ";
		cout << endl;
	}

}
