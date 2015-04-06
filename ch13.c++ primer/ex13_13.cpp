#include <iostream>
#include <string>

struct X
{
	X() { std::cout << "X()" << std::endl; }
	X(const X&) { std::cout << "X(const X&)" << std::endl; }

	X& operator = (const X& x)
	{
		std::cout << "operator = (const X&)" << std::endl;
		return *this;
	}

	~X()
	{
		std::cout << "~X()\n";
	}
};

int main()
{
	X x, y;
	x = y;
	X z(x);
	return 0;
}
