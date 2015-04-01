//3.36答：比较字符可以用字符比较函数，比较数组可以比较数组的元素个数是否相同，
//		然后再比较每个下标相同的元素。下面例子比较简单
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a1[5] = { 1, 2, 3, 4, 5 };
	int a2[5] = { 1, 2, 4, 4, 5 };
	bool index;
	for (int i = 0; i != 5; ++i)
	{
		if (a1[i] != a2[i])
		{
			cout << "两个数组不相等" << endl;
		}
	}
}

/*

而比较两个vector同string一样，两个vector对象相等话他们当所含的个数相同，而且对应位置
的元素值也相同。关系运算符依照字典顺序进行比较：如果两个vector对象的容量不相同，但是在
相同的位置上的元素值都一样，则元素较少的vector对象小于较多的vector对象；如果元素的值有
区别，则vector对象的大小关系由第一对相异的元素值的大小关系决定。

*/