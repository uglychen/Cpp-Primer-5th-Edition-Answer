#include<iostream>	
#include<vector>	
#include<iterator>	
#include<string>
using namespace std;
int main()
{
	vector<string> text;
	string word;
	while (cin >> word)
	{
		text.push_back(word);
	}
	auto it = text.begin();
	{
		for (auto itr = (*it).begin(); itr != (*it).end(); itr++)
			*itr = toupper(*itr);
	}
	for (auto it = text.begin(); it != text.end(); ++it)
		cout << *it << endl;

	return 0;
}
