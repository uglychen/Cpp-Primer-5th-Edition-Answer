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
	}//��Ȼ��for��Χ�����򵥸�������

	cout << s << endl;
}
