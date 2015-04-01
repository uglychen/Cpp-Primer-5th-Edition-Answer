#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string word;
	vector<string> svec;
	while (cin >> word)
	{
		svec.push_back(word);
	}

	int i_cnt = 0;

	i_cnt = count(svec.cbegin(), svec.cend(), "chen");

	cout << i_cnt << endl;
}
