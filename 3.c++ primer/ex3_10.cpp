#include<iostream>	
#include<string>	
using namespace std;
int main()
{
	string s("chen, xun");
	for (auto c : s)
	{
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;
	return 0;
}
