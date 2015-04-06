#include <iostream>
#include <string>

struct Numbered
{
	//! for ex13.14
	Numbered()
	{
		static unsigned i = 0;
		++i;
		mySn = i;
	}

	//! for ex13.15

	Numbered(const Numbered& num)
	{
		static unsigned j = 99;
		++j;
		mySn = j;
	}


	unsigned mySn;
};

//void f (Numbered s)
void f(Numbered &s)
{
	std::cout << s.mySn << std::endl;
}
int main()
{
	Numbered a, b = a, c = b;

	f(a); f(b); f(c);

	return 0;
}
