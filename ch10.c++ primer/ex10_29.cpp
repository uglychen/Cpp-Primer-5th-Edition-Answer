#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ifstream in("chen.txt");
	vector<string> svec1;
	//vector<string> svec2;
	istream_iterator<string> cin_iter1(in), eof;
	while (cin_iter1 != eof)
		svec1.push_back(*cin_iter1++);
	for (auto s : svec1)
		cout << s << " ";
	cout << endl;

	ifstream in2("chen.txt");
	istream_iterator<string> cin_iter2(in2);
	vector<string> svec2(cin_iter2, eof);
	ostream_iterator<string> out_iter(cout, " ");
	for (auto e : svec2)
		*out_iter++ = e;
	cout << endl;

	ifstream in3("chen.txt");
	istream_iterator<string> cin_iter3(in3);
	vector<string> svec3(cin_iter3,eof);
	//copy(svec3.begin(), svec3.end(), cin_iter3);
	for_each(svec3.begin(), svec3.end(), [](const string &s){cout << s << ' '; });

	cout << endl;
	return 0;
}
