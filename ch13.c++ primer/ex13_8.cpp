#include <iostream>
#include <string>

class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()) :
		ps(new std::string(s)), i(0)
	{
		std::cout << "use the default cpnstructor" << std::endl;
	}

	HasPtr(const HasPtr& oring) : ps(new std::string(*oring.ps)), i(oring.i)
	{
		std::cout << "use the copy constructor" << std::endl;
	}

	HasPtr &operator=(const HasPtr &rhs)
	{
		*ps = *rhs.ps;
		i = rhs.i;
		std::cout << "cout use the copy assignment - operator" << std::endl;
		return *this;
	}

private:
	std::string *ps;
	int    i;
};

int main()
{
	HasPtr my_hasptr("hello");
	HasPtr my_hasptr1 = my_hasptr;
	return 0;
}
