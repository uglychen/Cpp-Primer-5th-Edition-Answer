//5.18答：（a）do与while之间缺少花括号；（b）不允许在条件部分定义变量；（c）正确；


//5.19答：

#include <iostream>
#include<string>
using namespace std;
int main()
{
	do{
		cout << "输入两个string：";
		string v1, v2;
		cin >> v1 >> v2;
		if (v1.size() > v2.size())
			cout << v2 << endl;
		else
			cout << v1 << endl;

	} while (cin);
}
