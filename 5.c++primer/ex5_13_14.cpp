/*--------------------------------------------------------------------------------------

5.13�𣺣�a��ȱ��break��䣻��b����case1���֮���defaultԤ��֮ǰ�����˱�����
	Ӧ�ð�int ix����switch֮ǰ�Ϳ����ˣ���c��case���֮������˶��������Ӧ���÷ֱ�case 1��
	case 2����.����д����d��case���Ӧ�ýӳ����������ʽ����Ӧ���Ǳ�����ival��jval��kval���Ǳ�����

----------------------------------------------------------------------------------------*/

//5.14

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string BeforeWord, NowWord, ResultsWord;//���ڱ�����һ������,��ǰ��������Ľ��
	int cnt = 0, MaxCnt = 1;//�����ͱ��������
	while (cin >> NowWord)//����
	{
		if (NowWord == BeforeWord)//����һ��������ͬ
		{
			++cnt;
		}
		else//����һ�����벻ͬ
		{
			if (cnt>MaxCnt)
			{
				MaxCnt = cnt;
				ResultsWord = BeforeWord;
			}
			cnt = 1;
		}
		BeforeWord = NowWord;
	}
	if (MaxCnt != 1)//��֤�������ظ������֮��
	{
		cout << ResultsWord << endl << MaxCnt;
	}
	return 0;
}
