�汾1��
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (int(&row)[4] : a)
	{
		for (int col : row)
			cout << col << ' ';
		cout << endl;
	}
}


//�汾2��
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (int i = 0; i != 3; ++i)
	{
		for (int j = 0; j != 4; ++j)
			cout << a[i][j] << ' ';
		cout << endl;
	}
}


//�汾3��
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	using int_array = int[4];
	for (int_array *p = a; p != (a + 3); ++p)
	{
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
}
