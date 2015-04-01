#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s2)
	{
		if (s2 == s1)
			break;
		else
			s1 = s2;
	}
	if ((!s1.empty()) && s1 == s2)
		cout << "重复的单词是：" << s2 << endl;
	else
		cout << "没有重复的单词" << endl;
	return 0;
}
