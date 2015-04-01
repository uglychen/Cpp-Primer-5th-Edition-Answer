#include<iostream>
#include<string>
using namespace std;

class person
{
public:
	person() = default;

	person(string pName, string pAddress) :name(pName), address(pAddress){}

	person(istream &is)
	{
		is >> this->name >> this->address;
	}

	istream &read(istream &is, person &data)
	{
		is >> data.name >> data.address;
		return is;
	}

	ostream &print(ostream &os, const person &data)
	{
		cout << data.name << ' ' << data.address;
		return os;
	}

private:
	string name;
	string address;
};

