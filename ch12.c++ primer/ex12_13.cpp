#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main()
{

	auto sp = std::make_shared<int>();
	auto p = sp.get();
	cout << *sp << endl;
	cout << *p << endl;
	//delete p;

	return 0;
}
//运行发生错误
