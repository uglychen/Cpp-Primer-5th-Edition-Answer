#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}


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

	//stable_sort(words.begin(), words.end(), isShorter);
	stable_sort(words.begin(), words.end(),
		[](const string &s1, const string &s2)
	{return s1.size() < s2.size(); });

	for (const auto &s : words)
		cout << s << ' ';
	cout << endl;

	return 0;
}


