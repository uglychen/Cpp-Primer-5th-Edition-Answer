#include<iostream>
#include<string>

using namespace std;

class HasPtr
{
public:
	//default constructor
	HasPtr(const std::string &s = std::string())
		:ps(new string(s)), i(0){
		cout << 1 << endl;
	}

	//copy constructor
	HasPtr(const HasPtr &rhs) :ps(new std::string(*rhs.ps)), i(rhs.i){ cout << 2 << endl; }

	//copy assignment-operator
	HasPtr &opterator(const HasPtr&rhs)
	{
		auto newp = new string(*rhs.ps);
		delete ps;
		//ps = new std::string(*rhs.ps);
		ps = newp;
		i = rhs.i;
		cout << 3 << endl;
		return *this;
	}

private:
	std::string *ps;
	int i;
};

int main()
{
	HasPtr hp("chen"), hp2("xun");

	hp = hp2;

	return 0;
}
