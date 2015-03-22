#include<iostream>
#include <string>
#include<vector>
using namespace std;

string make_plural(size_t ctr, const string &word = "success", const string &ending = "es")
{
	return (ctr > 1) ? word + ending : word;
}

int main()
{
	size_t cnt = 1;
	cout << make_plural(cnt, "success", "es") << endl;

	cnt = 2;
	cout << make_plural(cnt, "failure", "s") << endl;
	return 0;
}
