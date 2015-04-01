#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	list<string> slist = { "chen", "chen", "chen", "xun" };
	slist.unique();

	ostream_iterator<string> out_iter(cout, " ");

	copy(slist.begin(), slist.end(), out_iter);
}
