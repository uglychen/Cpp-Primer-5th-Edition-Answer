#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;
vector<int> *vector_generator()
{
	vector<int> *ptr_v = new vector<int>();

	return ptr_v;
}

vector<int> * vector_process(vector<int> *ptr_v)
{
	int i;
	while (cin >> i)
	{
		ptr_v->push_back(i);
	}

	return ptr_v;
}

void vector_printer(vector<int> * ptr_v)
{
	for (const auto &e : *ptr_v)
		cout << e << " ";
	cout << "\n";
}

int main()
{
	vector<int> * my_ptr = vector_generator();

	vector_process(my_ptr);

	vector_printer(my_ptr);

	delete my_ptr;

	return 0;

}
