#include <iostream>
#include <vector>
#include <map>
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
	multimap<string, string> m = { { "chen", "1" }, { "chen", "2" }, { "chen", "3" }, { "axun", "4" } };
	for (auto e : m)
		cout << e.first << ' ' << e.second << endl;

	cout << "-------------------------------" << endl;

	multimap<string, string>::iterator it = m.find("chen");//返回的第一个匹配元素的迭代器

	if (it != m.end())
		m.erase(it);

	for (auto e : m)
		cout << e.first << ' ' << e.second << endl;

}
