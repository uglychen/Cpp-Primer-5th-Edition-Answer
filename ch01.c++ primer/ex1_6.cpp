#include<iostream>

using namespace std;


int main(int argc, char *argv[])
{
	int sum = 0;
	int value;
	while (cin >> value)
	{
		sum += value;
	}

	cout << sum << endl;
}