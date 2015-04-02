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

	map<string, size_t>::const_iterator map_it = word_count.cbegin();

	while (map_it != word_count.cend())
	{
		cout << map_it->first << " occurs " << map_it->second << " times" << endl;
		++map_it;
	}

	return 0;
}


