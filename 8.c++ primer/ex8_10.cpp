#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
	string line, word;
	ifstream input("ifile.txt");
	if (!input)
	{
		cout << "can not open input file" << endl;
		return -1;
	}

	vector<string> file;

	while (getline(input, line))
	{
		file.push_back(line);
	}
	input.close();

	for (auto &it : file)
	{
		istringstream cin_word(it);
		while (cin_word >> word)
		{
			cout << word << endl;
		}
		cout << "�ļ���һ�е����ǣ�" << endl;
	}

	return 0;
}
