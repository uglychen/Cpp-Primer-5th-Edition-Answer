#include<iostream>		
#include<string>	
using namespace std;
int main()
{
	string s("chen xun");
	for (auto &c : s)
	{
		if (!isspace(c))
			c = 'X';
	}
	cout << s << endl;
}
