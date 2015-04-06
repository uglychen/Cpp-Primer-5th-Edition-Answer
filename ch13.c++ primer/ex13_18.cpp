#include <iostream>
#include <string>

class Employee
{
public:
	Employee() :name(std::string()), id(get_id()){ }
	Employee(const std::string&s) :name(s), id(get_id()){ }

	Employee(const Employee&rhs) :name(rhs.name), id(rhs.id){ }

	Employee &operator=(const Employee&rhs)
	{
		name = rhs.name;
		id = rhs.id;
		return *this;
	}

	unsigned    get_id();


	std::string name;
	unsigned    id;
};

inline unsigned Employee::get_id()
{
	static unsigned i = 0;
	return ++i;
}

int main()
{
	Employee e1;
	Employee e2("sss");

	e1 = e2;

	std::cout << e1.id << " " << e2.id << std::endl;
	std::cout << e1.name << std::endl;
	std::cout << e2.name << std::endl;

	return 0;
}
