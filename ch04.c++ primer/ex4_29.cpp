#include <iostream>	
#include <string>	
#include <vector>
using namespace std;
int main()
{
	int x[10], *p = x;
	cout << sizeof(x) << endl;//40
	cout << sizeof(*x) << endl;//4
	cout << sizeof(p) << endl;//4
	cout << sizeof(*p) << endl;//4
	cout << sizeof(x) / sizeof(*x) << endl;//10
	cout << sizeof(p) / sizeof(*p) << endl;//1
}

