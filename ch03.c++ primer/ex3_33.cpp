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
//运行上面的程序，虽然能运行，但是scores没有初始化，所以其内容是我们无法预知的。
