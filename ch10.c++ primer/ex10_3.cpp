#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<int> ivec;
	for (int i = 0; i<10; ++i)
		ivec.push_back(i);

	int sum = accumulate(ivec.begin(), ivec.end(), 0);

	cout << sum << endl;

	return 0;
}
