#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void elimDups(vector<string> &words)
{
	for (auto s : words)
		cout << s << " ";
	cout << endl;

	sort(words.begin(), words.end());
	for (auto s : words)
		cout << s << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	for (auto s : words)
		cout << s << " ";
	cout << endl;

	words.erase(end_unique, words.end());
	for (auto s : words)
		cout << s << " ";
	cout << endl;
}


int main()
{
	vector<string> words{ "the", "quick", "red", "fox", "junmps", "over", "the", "slow", "red", "trutle" };

	elimDups(words);
}


