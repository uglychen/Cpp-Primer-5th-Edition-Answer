
/*---------------------------------------------------------------------------------------------
4.32������ָ����±���������е�Ԫ��

4.33�𣺣�someVal��++x������++y��x������--y����

4.34�𣺣�a���ж�fvalֵ�Ƿ����0����b������ͣ��ٰ���͵�ֵ��ֵ��dval����c����������ٰ�����ֵ��dval��ӣ�

4.35�𣺣�a����b������c������d�����ᷢ����ʽת�����������£�

#include <iostream>
using namespace std;
int main()
{
	char c;
	int ival = 2;
	float fval = 2.1;
	double dval = 2.3;
	unsigned int ui = 1;
	cout << ival*1.0 << endl;
	cout << (fval = ui - ival*1.0) << endl;
	c = ival + fval + dval;
	cout << c << endl;
	c = 'a' + 3;
	cout << c << endl;
}

4.36��int i*=static_cast<int>(d);

4.37��pv��double*���ͣ���d�����ǰ�double*ת����char*��
��a��pv=cosnt_cast<void *>(ps);��b��i=static_cast<int>(*pc);
��c��double pv=static_cast<double *>(&d);��d��pc=reinterpret_cast<char*>(pv);

4.38�𣺰ѱ��ʽ����ֵ���ת����double�͸�ֵ��slope��

-------------------------------------------------------------------------------------------*/

