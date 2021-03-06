#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <list>
#include <set>
#include <utility>
#include <fstream>
#include <sstream>
#include <unordered_map>
using namespace std;

void my_count(unordered_map<string, int> &m)
{
	string word;
	while (cin >> word)
		++m[word];

	for (const auto &e : m)
		std::cout << e.first << " " << e.second << endl;
}


void my_word_transform(const string &map_file, const string &input_file)
{
	ifstream fin(map_file);
	string line;
	unordered_map<string, string> trans_map;
	string key, value;
	//while (getline(fin, line)) 
	//{
	//	string key, value;
	//	key = line.substr(0, line.find(' '));
	//	value = line.substr(line.find(' ') + 1);
	//	trans_map[key] = value;
	//}
	while (fin >> key&&getline(fin, value))
	{
		trans_map.insert({ key, value.substr(1) });
	}
	fin.close();

	fin.open(input_file);
	string text;
	while (getline(fin, text))
	{
		istringstream stream(text);
		string word;
		while (stream >> word)
		{
			unordered_map<string, string>::const_iterator it = trans_map.find(word);
			cout << (it == trans_map.end() ? word + " " : it->second + " ");
		}
		cout << endl;
	}
}

int main()
{
	my_word_transform("map_file.txt", "input_file.txt");
	return 0;
}
