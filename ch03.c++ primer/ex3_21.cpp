#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
	vector<int> ivec;
	int  i;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it << endl;
	return 0;
}
