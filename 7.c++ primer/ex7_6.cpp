#include <iostream>
#include <string>
using namespace std;
struct Sales_data
{
	Sales_data &combine(const Sales_data&rhs)
	{
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

	string isbn() const { return bookNo; }

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//类的非成员函数接口
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

ostream &print(ostream &os, Sales_data &item)
{
	os << item.isbn() << ' ' << item.units_sold << ' '
		<< item.revenue/*<<item.avg_price()*/;
	return os;

}




int main()
{
	double price = 0;

	Sales_data total;
	if (cin >> total.bookNo >> price >> total.units_sold)
	{
		Sales_data trans;
		total.revenue = total.units_sold*price;
		while (cin >> trans.bookNo >> price >> trans.units_sold)
		{
			trans.revenue = trans.units_sold*price;
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				cout << total.bookNo << ' ' << total.revenue << ' ' << total.units_sold;
				total.bookNo = trans.bookNo;
				total.revenue = trans.revenue;
				total.units_sold = trans.units_sold;
			}
		}
		cout << total.bookNo << ' ' << total.units_sold << ' ' << total.revenue << endl;
	}
}
