#include<iostream>		
#include<string>	
using namespace std;
int main()
{
	string s("chen xun");

	for (decltype(s.size()) index = 0; index != s.size(); ++index)
	{
		if (!isspace(s[index]))
			s[index] = 'X';
	}//当然是for范围语句更简单更加清晰

	cout << s << endl;
}
