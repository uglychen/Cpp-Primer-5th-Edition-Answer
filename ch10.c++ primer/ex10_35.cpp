#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//for (auto iter = vec.end() - 1; iter <= vec.begin(); --iter)
	//	cout << *iter << endl;
	for (auto it = v.end() - 1; it != v.begin(); --it)
		std::cout << *it << " ";
}