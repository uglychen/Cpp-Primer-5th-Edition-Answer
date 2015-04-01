#include<iostream>	
#include<string>	
using namespace std;
int main()
{
	string s, word;
	while (cin >> word)
	{
		s += word;
	}
	cout << s << endl;
}//按照要求只需把s+=word修改s+=word+' '；即可
