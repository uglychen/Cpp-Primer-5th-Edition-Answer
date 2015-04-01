#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> ivec;
	int i;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	int *a = new int[ivec.size()];
	for (auto itr = ivec.begin(); itr != ivec.end(); ++itr)
	{
		*a++ = *itr;
	}
	for (auto i : ivec)
		cout << i << ' ';
	cout << endl;
}