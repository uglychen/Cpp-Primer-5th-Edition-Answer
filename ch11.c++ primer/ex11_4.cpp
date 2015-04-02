#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	map<string, size_t> word_map;
	string word;
	while (cin >> word)
	{
		for (auto i = 0; i != word.size(); ++i)
			word[i] = tolower(word[i]);

		auto ptr = std::find_if(word.begin(), word.end(), [](const char c) { return c == '.' || c == ','; });

		if (ptr != word.end())
			word.erase(ptr);

		++word_map[word];
	}

	for (auto e : word_map)
		cout << e.first << ' ' << e.second << endl;


	return 0;
}
