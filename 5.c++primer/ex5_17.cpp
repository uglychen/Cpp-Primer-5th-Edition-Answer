#include <iostream>
#include<vector>
#include<string>
using namespace std;
bool check(vector<int> ivec1, vector<int> ivec2, size_t size);
int main()
{
	vector<int> ivec1, ivec2;
	int i = 0;
	cout << "input ivec2: ";
	while (cin >> i)
		ivec1.push_back(i);
	cin.clear();
	cout << "input ivec2: ";
	while (cin >> i)
		ivec2.push_back(i);
	size_t size_1 = ivec1.size(), size_2 = ivec2.size();

	bool result = size_1>size_2 ? check(ivec1, ivec2, size_2) : check(ivec1, ivec2, size_1);

	cout << boolalpha << result << endl;
}

bool check(vector<int> ivec1, vector<int> ivec2, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (ivec1[i] != ivec2[i])
			return false;
	}
	return true;
}
