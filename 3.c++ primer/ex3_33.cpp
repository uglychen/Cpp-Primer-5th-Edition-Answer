#include<iostream>	
#include<vector>	
using namespace std;
int main()
{
	unsigned scores[11];
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
			++scores[grade / 10];
	}
	for (int i = 0; i != 11; ++i)
		cout << scores[i] << endl;
	return 0;
}
//��������ĳ�����Ȼ�����У�����scoresû�г�ʼ���������������������޷�Ԥ֪�ġ�
