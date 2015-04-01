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
		cout << total.bookNo << ' ' << total.revenue << ' ' << total.units_sold << endl;
	}
}
