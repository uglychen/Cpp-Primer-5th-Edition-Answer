#include <iostream>
#include <string>

using namespace std;

void function(string &s, const string &oldVal, const string &newVal)
{
	if (oldVal.size() > s.size())
		cout << "error input, please check your inout" << endl;

	string::size_type i = 0;

	while (i != s.size())
	{
		if (s[i] == oldVal[0])
		{
			auto tmp = s.substr(i, oldVal.size());
			if (tmp.compare(oldVal) == 0)
			{
				s.replace(i, oldVal.size(), newVal);
				i = i + newVal.size() - 1;//���³�ʼ��it��λ��
			}
		}

		++i;
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
