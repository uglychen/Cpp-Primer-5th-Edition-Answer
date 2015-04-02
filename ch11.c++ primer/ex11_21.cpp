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
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		//auto it = word_count.insert({ word, 1 });
		//pair<map<string, size_t>::iterator, bool>it = word_count.insert({ word, 1 });
		++word_count.insert({ word, 0 }).first->second;

		//if (!it.second)
		//	++it.first->second;
	}

	for (auto e : word_count)
		cout << e.first << " " << e.second << endl;
}
