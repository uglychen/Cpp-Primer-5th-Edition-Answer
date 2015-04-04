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

	process(std::shared_ptr<int>(p.get()));


	return 0;
}
