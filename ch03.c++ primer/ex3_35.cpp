#include<iostream>	
#include<vector>	
using namespace std;
int main()
{
	const int sz = 5;
	int a[sz] = { 1, 2, 3, 4, 5 };
	//	for (int *pbeg = begin(a),*pend = end(a); pbeg != pend; pbeg++)
	//		*pbeg = 0;
	//	for (int *pbeg = begin(a), *pend = end(a); pbeg != pend; pbeg++)
	//		cout << *pbeg << endl;
	for (int *p = a; p != a + sz; ++p)
		*p = 0;
	for (auto i : a)
		cout << i << endl;
	return 0;
}
//能是负数，所以ptrdiff_t是一种带符号类型。