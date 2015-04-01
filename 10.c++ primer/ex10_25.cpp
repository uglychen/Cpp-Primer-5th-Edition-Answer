#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;
using namespace placeholders;

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

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

ostream &print(ostream &os, const string &s, char c)
{
	return os << s << c;
}


string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr>1) ? word + ending : word;
}

void my_biggies_partition(vector<string> &words, vector<string>::size_type sz, ostream &os = cout, char c = ' ')
{
	elimDups(words);
	//stable_sort(words.begin(), words.end(), isShorter);
	stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2){return s1.size() < s2.size(); });
	for (auto s : words)
	{
		cout << s << " ";
	}
	cout << endl;

	//auto wc = find_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz; });
	//auto wc = partition(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz; });
	auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
	for (auto s : words)
	{
		cout << s << " ";
	}
	cout << endl;

	//auto count = words.end() - wc;
	//cout << count << " " << make_plural(count, "word", "s")
	//	<< " of length " << sz << " or longer" << endl;

	//for_each(words.begin(), wc, [](const string &s){cout << s << " "; });
	for_each(words.begin(), wc, bind(print, ref(os), _1, ' '));

	cout << endl;
}

int main()
{
	vector<string> words{ "the", "quick", "red", "fox", "junmps", "over", "the", "slow", "red", "trutle" };

	my_biggies_partition(words, 5, cout, ' ');
}
