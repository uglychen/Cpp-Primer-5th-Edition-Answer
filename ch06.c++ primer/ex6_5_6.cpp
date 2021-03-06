/*---------------------------------------------------------------------------------------------------------------
6.5答：return n > 0 ? n : (-1)*n;

6.6答：形参是一种自动对象，函数开始的时候为形参申请存储空间，因为形参定义在函数体组用域之内，
所以一旦函数终止，形参也就被销毁。局部对象如果是非静态的，那么其生存周期是从其被创建到函数体结束。
静态局部变量在程序路劲第一经过对象定义语句是初始化，并且直到程序终止才被销毁，在此期间即使对象所在的函数结束执行也不会对它有影响。

例：
#include <iostream>
#include<string>
using namespace std;
int fact(int n)
{
	int i = 2;
	static int cnt = 0;
	++cnt;
	cout << cnt * 2 << ' ';
	return n > 0 ? n : (-1)*n;

}
int main()
{
	for (int j = 0; j != 4; ++j)
	{
		cout << fact(j) << endl;
	}
}

---------------------------------------------------------------------------------------------------------------------*/
