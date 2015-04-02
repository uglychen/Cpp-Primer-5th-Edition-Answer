#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

int main()
{
	vector<string> exclude = { "chen", "xun", "is" };
	string word;
	while (cin >> word)
	{
		for (const auto &e : exclude)
		{
			if (e == word)
				cout << "excluded!" << endl;
		}
	}

	return 0;
}

