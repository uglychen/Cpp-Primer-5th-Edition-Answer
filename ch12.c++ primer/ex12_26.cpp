#include<iostream>
#include<string>
#include<memory>

using namespace std;

int main()
{
	std::allocator<std::string> my_alloc;
	std::string *const p = my_alloc.allocate(10);
	std::string *q = p;

	std::string word;
	while (cin >> word&&q != p + 2)
	{
		my_alloc.construct(q, word);
		++q;
	}

	q = p;
	while (q != p + 2)
	{
		cout << *q++ << endl;
	}

	while (q != p)
		my_alloc.destroy(--q);

	return 0;
}
