#include<iostream>
#include<vector>
#include<forward_list>
#include<string>

using namespace std;

int main()
{
	char c;
	vector<char> cvec;
	while (cin >> c)
		cvec.push_back(c);
	string s(cvec.begin(), cvec.end());
	cout << s << endl;
	return 0;
}

