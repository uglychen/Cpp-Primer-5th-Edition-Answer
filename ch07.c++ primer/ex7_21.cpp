#include<iostream>
#include<string>
using namespace std;

class Sales_data
{
	//这里第四个构造函数要用到类外 类的接口read函数，如果你不知道friend函数先不要管。
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend istream &read(std::istream&, Sales_data&);
	friend ostream &print(ostream &os, Sales_data &item);
public:
	//4个构造函数
	Sales_data() = default;
	Sales_data(const string&s) :bookNo(s){ }
	//Sales_data() :bookNo(0), units_sold(0), revenue(0.0)
	//这里显示调用类内初始值显示初始化成员数据,同第二种构造函数是等价的；
	Sales_data(const string&s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n){ }
	Sales_data(istream &is)
	{
		read(is, *this);
	}

	Sales_data &combine(const Sales_data&rhs)
	{
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

	string isbn() const { return bookNo; }

	double  avg_price() const;

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
