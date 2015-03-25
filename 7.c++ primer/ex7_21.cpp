#include<iostream>
#include<string>
using namespace std;

class Sales_data
{
	//������ĸ����캯��Ҫ�õ����� ��Ľӿ�read����������㲻֪��friend�����Ȳ�Ҫ�ܡ�
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend istream &read(std::istream&, Sales_data&);
	friend ostream &print(ostream &os, Sales_data &item);
public:
	//4�����캯��
	Sales_data() = default;
	Sales_data(const string&s) :bookNo(s){ }
	//Sales_data() :bookNo(0), units_sold(0), revenue(0.0)
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

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
