#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;
using namespace placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() < sz;
}

//vector<int>::iterator
//find_first_bigger(vector<int> &v, const string &s)
//{
//	auto it = std::find_if(v.begin(), v.end(), std::bind(check_size, s, _1));
//	return it;
//}

int main()
{
	vector<int> ival{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	string s = "chenxun";

	auto it = std::find_if(ival.begin(), ival.end(), std::bind(check_size, s, _1));

	//auto it = find_first_bigger(ival, s);

	cout << *it << endl;

	return 0;
}
