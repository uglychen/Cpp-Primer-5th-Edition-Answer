#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int>::reverse_iterator iter = vec.rbegin();
	//cout << *iter << endl;
	for (; iter != vec.rend(); ++iter)
		cout << *iter << " ";
	cout << endl;

	for_each(vec.crbegin(), vec.crend(), [](const int &i){ cout << i << " "; });

	cout << endl;

}
