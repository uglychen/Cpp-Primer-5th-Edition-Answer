#include <iostream>
#include<string>

using namespace std;

string function(string &s, const string &pre, const string &suf)
{
	s.insert(0, pre);
	s.append(suf);
	return s;
}

int main()
{
	string s = "chen";
	function(s, "mr.", ".jr");
	cout << s << endl;
}
