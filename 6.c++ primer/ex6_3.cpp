#include <iostream>
#include<string>
using namespace std;
int fact(int n)
{
	int val = 1;
	for (int ret = 2; ret <= n; ret++)
	{
		val *= ret;
	}
	return val;
}

int main()
{
	cout << fact(2);
}
