#include <iostream>
#include <vector>
#include <map>
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

using namespace std;

void my_word_transform(const string &map_file, const string &input_file)
{
	ifstream fin(map_file);
	string line;
	map<string, string> trans_map;

	while (getline(fin, line))
	{
		string key, value;
		key = line.substr(0, line.find(' '));
		value = line.substr(line.find(' ') + 1);
		trans_map[key] = value;
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
			map<string, string>::const_iterator it = trans_map.find(word);
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

