#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> svec;
	string  word;
	while (cin >> word)
	{
		svec.push_back(word);
	}
	for (auto s : svec)
	{
		for (auto &c : s)
		//for (decltype(s.size()) index = 0; index != s.size(); ++index)
		{
			c = toupper(c);
			//s[index] = toupper(s[index]);
		}
		cout << s << endl;
	}

	return 0;
}
