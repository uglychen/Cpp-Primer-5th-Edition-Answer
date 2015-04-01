#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Sales_data
{
	//������ĸ����캯��Ҫ�õ����� ��Ľӿ�read����������㲻֪��friend�����Ȳ�Ҫ�ܡ�
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend istream &read(std::istream&, Sales_data&);
	friend ostream &print(ostream &os, Sales_data &item);

public:
	//4�����캯��
	//Sales_data() = default;
	Sales_data(const string&s) :bookNo(s){ }
	Sales_data() :bookNo(0), units_sold(0), revenue(0.0){};
	//������ʾ�������ڳ�ʼֵ��ʾ��ʼ����Ա����,ͬ�ڶ��ֹ��캯���ǵȼ۵ģ�
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

public:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
//��ķǳ�Ա�����ӿ�
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


