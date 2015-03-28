#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;
int main()
{
	string s;
	ifstream input("ifile.txt");
	if (!input)
	{
		cerr << "can not open the file" << endl;
		return -1;
	}

	vector<string> svec;
	while (getline(input, s))
	{
		svec.push_back(s);
	}
	input.close();

	vector<string>::const_iterator iter = svec.begin();
	while (iter != svec.end())
	{
		cout << *iter << endl;
		iter++;
	}
	system("pause");
	return 0;
}