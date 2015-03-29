#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	string::size_type pos = 0;
	string word;
	vector<string> svec;
	string s1 = "bfghjlklpqty";
	fstream myfile("test.txt");
	while (myfile >> word)
	{
		pos = word.find_first_of(s1);
		if (pos == -1)
			svec.push_back(word);
	}
	for (auto i : svec)
		cout << i << endl;

	string::size_type maxlen = 0;
	auto iter = svec.begin();
	while (iter != svec.end())
	{
		auto theVal = (*iter).size();
		if (theVal > maxlen)
		{
			maxlen = theVal;
		}
		++iter;
	}
	cout << maxlen << endl;;
	for (auto iter1 = svec.begin(); iter1 != svec.end(); ++iter1)
	{
		if ((*iter1).size() == maxlen)
		{
			cout << *iter1 << endl;
		}
	}
	return 0;
}
