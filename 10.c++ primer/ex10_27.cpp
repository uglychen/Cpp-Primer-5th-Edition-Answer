#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> svec{ "chen", "xun", "chen", "chen", "xun" };
	list<string> slist;
	unique_copy(svec.begin(), svec.end(), back_inserter(slist));
	for (auto s : slist)
		cout << s << " ";
	cout << endl;

	return 0;
}
