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
		cout << "�ظ��ĵ����ǣ�" << s2 << endl;
	else
		cout << "û���ظ��ĵ���" << endl;
	return 0;
}
