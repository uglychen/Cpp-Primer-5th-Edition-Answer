#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> iforward_list{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	auto prev = iforward_list.before_begin();

	auto curr = iforward_list.begin();

	while (curr != iforward_list.end())
	{
		if (*curr % 2)
		{
			curr = iforward_list.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}

	}

	for (auto i : iforward_list)
		cout << i << ' ';
	cout << endl;

	return 0;
}
