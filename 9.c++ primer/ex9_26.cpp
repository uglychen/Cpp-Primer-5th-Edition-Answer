#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	vector<int> ivec(ia, ia + 11);

	list<int> ilist(ia, ia + 11);

	for (auto iter = ilist.begin(); iter != ilist.end(); ++iter)
	{
		if (*iter % 2 == 1)
		{
			iter = ilist.erase(iter);
			iter--;
		}
	}

	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
	{
		if (*iter % 2 == 0)
		{
			iter = ivec.erase(iter);
		}
	}

	for (auto i : ilist)
		cout << i << ' ';
	cout << endl;

	for (auto i : ivec)
		cout << i << ' ';
	cout << endl;

	return 0;
}

