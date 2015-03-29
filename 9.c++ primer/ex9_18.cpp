#include<iostream>
#include<vector>
#include<string>
#include<deque>
using namespace std;
int main()
{
	string word;
	deque<string> svec;
	while (cin >> word)
	{
		svec.push_back(word);
	}

	for (auto iter = svec.begin(); iter != svec.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}
