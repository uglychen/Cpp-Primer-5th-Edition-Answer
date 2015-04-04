#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;
void process(std::shared_ptr<int> ptr)
{
	std::cout << "inside the process function:" << ptr.use_count() << endl;
}

int main()
{
	std::shared_ptr<int> p(new int(42));
	process(std::shared_ptr<int>(p));//2

	std::cout << p.use_count() << endl;//1
	auto q = p;
	std::cout << p.use_count() << endl;//2
	std::cout << q.use_count() << endl;//2
	std::cout << "the int p now points to is:" << *p << endl;//42
	return 0;
}
