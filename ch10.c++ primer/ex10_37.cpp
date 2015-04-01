#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> ilist;
	copy(v.rbegin()+3, v.rend()-2, back_inserter(ilist));
	for (auto i : ilist)
		cout << i << endl;

	return 0;
}
