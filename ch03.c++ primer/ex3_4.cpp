#include<iostream> 
#include<string> 
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
		cout << "s1����s2" << endl;
	else
	{
		if (s1 > s2)
			cout << s1 << endl;
		else
			cout << s2 << endl;;
	}
	//��д�Ƚϳ���
	if (s1.size() == s2.size())
		cout << "s1�ĳ��ȵ���s2�ĳ���" << endl;
	else
	{
		if (s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;;
	}
}
