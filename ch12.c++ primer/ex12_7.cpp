#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;
shared_ptr<vector<int>> vector_generator()
{
	shared_ptr<vector<int>> ptr_v = make_shared<vector<int>>();

	return ptr_v;
}

shared_ptr<vector<int>> vector_process(shared_ptr<vector<int>> ptr_v)
{
	int i;
	while (cin >> i)
	{
		ptr_v->push_back(i);
	}

	return ptr_v;
}

void vector_printer(shared_ptr<vector<int>> ptr_v)
{
	for (const auto &e : *ptr_v)
		cout << e << " ";
	cout << "\n";
}

int main()
{
	shared_ptr<vector<int>> my_ptr = vector_generator();

	vector_process(my_ptr);

	vector_printer(my_ptr);

	return 0;

}
