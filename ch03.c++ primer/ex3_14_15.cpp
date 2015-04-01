#include<iostream>	
#include<vector>	
#include<string>
using namespace std;
int main()
{
	vector<int> ivec;
	int i;
	while (cin >> i)
	{
		ivec.push_back(i);
	}

	for (auto i : ivec)
		cout << i << ' ';
	cout << endl;

	vector<string> svec;
	string  word;
	while (cin >> word)
	{
		svec.push_back(word);
	}
	for (auto s : svec)
		cout << s << endl;


	return 0;
}
