#include<iostream>
#include<string>

using namespace std;

class HasPtr
{
public:
	//default constructor默认构造函数
	HasPtr(const std::string &s = std::string())
		:ps(new string(s)), i(0), use(new std::size_t(1)) {
		cout << 1 << std::endl;
	}

	//copy constructor
	HasPtr(const HasPtr &rhs) :ps(rhs.ps), i(rhs.i), use(rhs.use)
	{
		++*use;
		cout << 2 << endl;
	}

	//copy assignment-operator
	HasPtr& operator=(const HasPtr& rhs);

	~HasPtr()
	{
		if (--*use == 0)
		{
			delete ps;
			delete use;
		}
	}

private:
	std::string *ps;
	int i;
	std::size_t *use;
};


inline HasPtr& HasPtr::operator = (const HasPtr&rhs)
{
	++*rhs.use;
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	cout << 3 << std::endl;
	return *this;
}

//inline HasPtr&  HasPtr::operator = (const HasPtr& rhs)
//{
//	delete ps;
//	ps = new std::string(*rhs.ps);
//	i = rhs.i;
//	cout << 3 << endl;
//	return *this;
//}

int main()
{
	HasPtr hp;
	HasPtr hp1("chen"), hp2("xun");

	hp = hp2;

	return 0;
}
