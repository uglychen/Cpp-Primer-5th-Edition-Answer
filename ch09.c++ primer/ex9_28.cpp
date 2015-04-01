#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<list>
#include<forward_list>
using namespace std;

void my_insert(forward_list<string> &f, const string &s1, const string &s2)
{
	auto prev = f.before_begin();

	auto curr = f.begin();

	while (curr != f.end())
	{
		if (*curr == s1)
		{
			f.insert_after(curr, s2);
			return;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	f.insert_after(prev, s2);

	return;

}

int main()
{
	forward_list<string> my_vector{ "chen", "xun", "is", "an", "student" };

	my_insert(my_vector, "anqq", "excellent");

	my_insert(my_vector, "student", ", oh yeah!");

	for (auto &a : my_vector)
		cout << a << ' ';
	cout << endl;

	return 0;
}
