#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v = { 2, 1, 2, 3, 4, 5, 6, 7, 8,0, 9 };
	auto it = find(v.rbegin(), v.rend(), 0);
	cout << *it << endl;
}