#include <iostream>
#include <vector>
using namespace std;

typedef int fun(int, int);

int sum(int a, int b){ 	return a + b; }

int reduce(int a, int b)
{
	if (a >= b)
		return a - b;
	else
		return b - a;
}

int ride(int a, int b){ return a*b; }

int divide(int a, int b){ return a / b; }

int main()
{
	int a = 20, b = 10;
	vector<fun*> ivec;
	ivec.push_back(sum);
	ivec.push_back(reduce);
	ivec.push_back(ride);
	ivec.push_back(divide);
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		cout << (*it)(a, b) << endl;
	}
	return 0;
}
