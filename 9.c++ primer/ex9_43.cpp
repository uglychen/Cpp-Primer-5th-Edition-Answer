#include <iostream>
#include <string>

using namespace std;

void function(string &s, const string &oldVal, const string &newVal)
{
	if (oldVal.size() > s.size())
		cout << "error input, please check your inout" << endl;

	string::iterator it = s.begin();

	while (it != s.end())
	{
		if (*it == *oldVal.begin())
		{
			auto tmp = s.substr(it - s.begin(), oldVal.size());

			if (tmp.compare(oldVal) == 0)
			{
				int len = it - s.begin();//len��¼��ǰitλ�õ�s.begin�����ĳ����Ƕ���
				it = s.erase(it, it + oldVal.size());
				s.insert(it, newVal.begin(), newVal.end());
				it = s.begin() + len + oldVal.size() - 1;//���³�ʼ��it��λ��
			}
		}

		++it;
	}
}

int main()
{
	string s = "chenxun tho chenxun thru";
	function(s, "tho", "though");
	function(s, "thru", "through");
	cout << s << endl;

	return 0;

}