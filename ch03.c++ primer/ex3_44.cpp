#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	//using int_array = int[4];
	typedef int int_array[4];
	for (int_array *p = a; p != (a + 3); ++p)
	{
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
}
