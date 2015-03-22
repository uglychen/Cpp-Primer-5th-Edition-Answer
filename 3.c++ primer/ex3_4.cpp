#include<iostream> 
#include<string> 
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
		cout << "s1等于s2" << endl;
	else
	{
		if (s1 > s2)
			cout << s1 << endl;
		else
			cout << s2 << endl;;
	}
	//改写比较长度
	if (s1.size() == s2.size())
		cout << "s1的长度等于s2的长度" << endl;
	else
	{
		if (s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;;
	}
}
