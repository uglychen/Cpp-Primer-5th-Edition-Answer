#include <iostream>
#include<string>
using namespace std;

int fact()
{
	static int cnt = 0;
	return cnt++;
}

int main()
{
	for (int j = 0; j != 4; ++j)
	{
		cout << fact() << endl;
	}
}
