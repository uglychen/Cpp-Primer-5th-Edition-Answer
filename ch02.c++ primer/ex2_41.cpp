#include<iostream>
#include<string>
using namespace std;
class Sales_data
{
public:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main()
{
	Sales_data data1, data2;
	double price = 0;

	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}


/*
//重写1.22读取多个相同的ISBN的销售记录，输出所有的和

#include <iostream>
#include <string>
using namespace std;
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	double price = 0;
	Sales_data data1;

	if (cin >> data1.bookNo >> data1.units_sold >> price)
	{
		data1.revenue = data1.units_sold*price;
		Sales_data data2;
		while (std::cin >> data2.bookNo >> data2.units_sold >> price)
		{
			if (data1.bookNo == data2.bookNo)
			{
				data1.units_sold += data2.units_sold;
				data1.revenue = data1.revenue + data2.units_sold*price;
			}
		}
	}
	cout << data1.units_sold << endl;
	cout << data1.revenue << endl;
	return 0;
}
//重写1.23：读取多条销售记录，统计每个ISBN有几条销售记录
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{

	Sales_data data1;
	Sales_data data2;
	if (cin >> data1.bookNo)
	{
		int cnt = 1;
		while (cin >> data2.bookNo)
		{

			if (data1.bookNo == data2.bookNo)
			{
				++cnt;
			}
			else
			{
				cout << data1.bookNo << "卖了" << cnt << "本" << endl;
				data1.bookNo = data2.bookNo;
				cnt = 1;
			}
		}
		cout << data1.bookNo << "卖了" << cnt << "本" << endl;
	}
	return 0;
}

*/