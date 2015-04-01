#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec = { 8, 5, 2, 6, 2, 8, 9, 7, 4, 3, 2 };

	int i_cnt = 0;

	i_cnt = count(ivec.cbegin(), ivec.cend(), 2);

	cout << i_cnt << endl;
}
