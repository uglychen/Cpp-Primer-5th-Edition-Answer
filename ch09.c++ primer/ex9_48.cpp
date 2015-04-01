#include<iostream>
#include<string>
using namespace std;
int main()
{
	string numbers("01345679");
	string name("r2d2");

	cout << numbers.find(name) << endl;

	cout << string::npos << endl;
	return 0;
}
