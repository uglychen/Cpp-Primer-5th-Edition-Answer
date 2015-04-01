#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	int cnt = 10;
	while (cnt > 0)
		ivec.push_back(cnt--);
	vector<int>::const_iterator iter = ivec.begin();
	while (iter != ivec.end())
		cout << *iter++ << endl;
	vector<int> vec2(10, 0);
	cnt = vec2.size();
	for (vector<int>::size_type ix = 0; ix != vec2.size(); ix++, cnt--)
		vec2[ix] = cnt;
	iter = vec2.begin();
	while (iter != vec2.end())
		cout << *iter++ << endl;
	return 0;
}

