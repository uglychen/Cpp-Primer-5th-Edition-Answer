#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (auto *p = a; p != a + 3; ++p)
	{
		for (auto *q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
}
