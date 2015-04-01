#include <iostream>
#include <string>
using namespace std;
struct Sales_data
{
public:
	Sales_data &combine(const Sales_data&rhs)
	{
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

	string isbn() const { return bookNo; }

	double  avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

/*-----------------------------------------------------------
//  7.8答：因为写操作会该修改流的内容，所以接受Sales_data定义函数
//  为普通引用，而输出操作不应该修改数据所以定义成const引用。
-----------------------------------------------------------*/


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
	Sales_data item1, item2;
	read(cin, item1);
	read(cin, item2);
	print(cout, add(item1, item2));
	Sales_data total;
	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total) << endl;
				total.bookNo = trans.bookNo;
				total.revenue = trans.revenue;
				total.units_sold = trans.units_sold;
			}
		}
		print(cout, total);
	}
}
