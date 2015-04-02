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
	multimap<string, vector<string>> famls;
	string faml_name, child_name;
	vector<string> v_child_name;
	while (cin >> faml_name)
	{
		while (cin >> child_name)
			v_child_name.push_back(child_name);
	}
	famls.insert({ faml_name, v_child_name });

	for (auto e : famls)
	{
		cout << e.first << " ";
		for (auto s : child_name)
			cout << s << " ";
		cout << endl;
	}

	return 0;
}

