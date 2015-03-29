#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<list>
using namespace std;
int main()
{
	list<int> ilist = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	deque<int> odd_deque, even_deque;

	for (auto iter = ilist.begin(); iter != ilist.end(); ++iter)
	{
		if (*iter % 2 == 0)
			even_deque.push_back(*iter);
		else
			odd_deque.push_back(*iter);
	}

	for (auto iter = odd_deque.begin(); iter != odd_deque.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	for (auto iter = even_deque.begin(); iter != even_deque.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}
