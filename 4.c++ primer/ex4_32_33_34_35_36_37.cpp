
/*---------------------------------------------------------------------------------------------
4.32答：利用指针和下标操作数组中的元素

4.33答：（someVal？++x），（++y：x），（--y）；

4.34答：（a）判断fval值是否等于0；（b）先求和，再把求和的值赋值给dval；（c）先求积，再把所得值与dval相加；

4.35答：（a）（b）、（c）、（d）都会发生隐式转换；测试如下；

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

4.36答：int i*=static_cast<int>(d);

4.37答：pv是double*类型，（d）中是把double*转换成char*型
（a）pv=cosnt_cast<void *>(ps);（b）i=static_cast<int>(*pc);
（c）double pv=static_cast<double *>(&d);（d）pc=reinterpret_cast<char*>(pv);

4.38答：把表达式的求值结果转换成double型赋值给slope；

-------------------------------------------------------------------------------------------*/

