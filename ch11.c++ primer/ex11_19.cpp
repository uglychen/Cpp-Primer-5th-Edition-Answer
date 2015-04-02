#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <list>
#include <set>
#include <utility>
#include "my_Sales_data.h"

using namespace std;

bool comapareIsbn(const Sales_data &s1, const Sales_data &s2)
{
	return s1.isbn() < s2.isbn();
}

int main()
{
	bool(*fp) (const Sales_data &s1, const Sales_data &s2) = comapareIsbn;

	multiset<const Sales_data, bool(*) (const Sales_data&, const Sales_data&)> m(fp);

	multiset<const Sales_data, bool(*) (const const Sales_data &, const Sales_data &)>::iterator begin = m.begin();

	return 0;
}


