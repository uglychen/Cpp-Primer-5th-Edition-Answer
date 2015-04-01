#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> ival(10);
	fill_n(ival.begin(), 10, 1);
	for (auto i : ival)
		cout << i << ' ';
	cout << endl;


	vector<int> ivec;
	fill_n(back_inserter(ivec), 10, 0);
	for (auto i : ivec)
		cout << i << ' ';
	cout << endl;

}

