//5.18�𣺣�a��do��while֮��ȱ�ٻ����ţ���b�����������������ֶ����������c����ȷ��


//5.19��

#include <iostream>
#include<string>
using namespace std;
int main()
{
	do{
		cout << "��������string��";
		string v1, v2;
		cin >> v1 >> v2;
		if (v1.size() > v2.size())
			cout << v2 << endl;
		else
			cout << v1 << endl;

	} while (cin);
}
