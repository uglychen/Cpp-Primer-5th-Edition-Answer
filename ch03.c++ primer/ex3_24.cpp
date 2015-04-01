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
	for (auto it = ivec.begin(); it < ivec.end() - 1; it = it + 2)
	{
		cout << (*it) + (*it + 1) << endl;
	}
	if (ivec.size() % 2 != 0)
		cout << "最后一个元素没有求和" << endl;
	return 0;
}
