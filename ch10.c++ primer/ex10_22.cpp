#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;
using namespace placeholders;

inline bool biggerThan(const string &s, const vector<string>::size_type sz)
{
	return s.size() > sz;
}

unsigned biggerThan6_function(const vector<string> &words)
{
	return count_if(words.begin(), words.end(), bind(biggerThan, _1, 6));
}

int main()
{
	vector<string> svec{ "chenxun", "chen", "chenxun2", "chen1", "chenxun2" };

	int i = biggerThan6_function(svec);

	cout << i << endl;
	return 0;
}
