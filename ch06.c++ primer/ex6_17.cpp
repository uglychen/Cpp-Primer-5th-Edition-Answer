#include <iostream>
#include<string>
using namespace std;
bool my_isupper(const string &s)
{
	string::size_type size = s.size();
	for (decltype(s.size()) index = 0; index != size; index++)
	{
		if (s[index] >= 'A'&& s[index] <= 'Z')
			return true;
	}
}
string my_tolower(string &s)
{
	if (my_isupper(s))
	{
		string::size_type size = s.size();
		for (decltype(s.size()) index = 0; index != size; ++index)
			s[index] = tolower(s[index]);
		return s;
	}
	else
		return s;
}
int main()
{
	string s("chenXun");
	s = my_tolower(s);
	cout << s << endl;
}
