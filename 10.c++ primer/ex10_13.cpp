#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool my_compare(const string &s)
{
	return s.size() >= 5;
}

int main()
{
	vector<string> svec{ "aaaa", "aa", "aaaaaaa", "aaaaaaaaa", "aaa", "aaaa" };
	auto it = partition(svec.begin(), svec.end(), my_compare);
	for (auto s : svec)
		cout << s << " ";
	cout << endl;

	for (auto iter = svec.begin(); iter != it; ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}
