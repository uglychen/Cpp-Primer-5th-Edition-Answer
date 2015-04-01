#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include "my_Sales_data.h"

using namespace std;

//bool compareIsbn(const Sales_data &s1, const Sales_data &s2)
//{
//	return s1.isbn().size() < s2.isbn().size();
//}

int main()
{
	Sales_data d1("aaaaaa"), d2("a"), d3("aaa"), d4("b"), d5("aaaabbbb");
	std::vector<Sales_data> v = { d1, d2, d3, d4, d5 };

	sort(v.begin(), v.end(), [](const Sales_data &s1, const Sales_data &s2){return s1.isbn().size() < s2.isbn().size(); });

	for (const auto &element : v)
		std::cout << element.isbn() << " ";
	std::cout << "\n";

	return 0;
}
