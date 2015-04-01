/*--------------------------------------------------------------------------------------

5.13答：（a）缺少break语句；（b）在case1语句之后和default预计之前定义了变量，
	应该把int ix；在switch之前就可以了；（c）case语句之后出现了多个常量，应该用分别case 1：
	case 2：….这样写；（d）case语句应该接常量或常量表达式，不应该是变量，ival、jval、kval都是变量。

----------------------------------------------------------------------------------------*/

//5.14

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string BeforeWord, NowWord, ResultsWord;//用于保存上一次输入,当前输入和最大的结果
	int cnt = 0, MaxCnt = 1;//计数和保存最大数
	while (cin >> NowWord)//输入
	{
		if (NowWord == BeforeWord)//以上一个输入相同
		{
			++cnt;
		}
		else//以上一个输入不同
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
	if (MaxCnt != 1)//保证是在有重复的情况之下
	{
		cout << ResultsWord << endl << MaxCnt;
	}
	return 0;
}
