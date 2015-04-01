/*-------------------------------------------------------------------------

class person
{
public:
	person(string pName, string pAddress)
	{
		name = pName;
		address = pAddress;
	}
private:
	string name;
	string address;
};


//7.5答：应该是cosnt成员函数，在这两个函数体内不应该修改成员数据的值。
string get_name() const
{
	return (*this).name;
}
string get_addes() const
{
	return this->address;
}


--------------------------------------------------------------------------*/