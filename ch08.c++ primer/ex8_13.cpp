#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};



int main()
{
	string line, word;
	vector<PersonInfo> people;

	ifstream input("ifile.txt");

	if (!input)
	{
		cout << "can not open input file" << endl;
		return -1;
	}

	while (getline(input, line))
	{
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while (record >> word)
		{
			info.phones.push_back(word);
		}

		people.push_back(info);
	}

	input.close();

	for (auto it1 : people)
	{
		cout << it1.name << " ";
		for (auto it2 : it1.phones)
			cout << it2 << " ";
		cout << endl;
	}

	return 0;
}
