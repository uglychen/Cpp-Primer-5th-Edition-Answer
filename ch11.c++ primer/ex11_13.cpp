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
	int i;
	string word;

	pair<std::string, int> pair1;

	vector< pair<string, int>> v;

	while (cin >> word&&cin >> i)
	{
		//pair1 = pair<string, int>(word, i);
		//pair1 = { word, i };
		pair1 = make_pair(word, i);
		v.push_back(pair1);
	}

	for (auto e : v)
		cout << e.first << " " << e.second << " " << "\n";
	return 0;
}
