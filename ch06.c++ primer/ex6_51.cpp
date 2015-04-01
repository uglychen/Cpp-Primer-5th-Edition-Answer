#include <iostream>
#include <vector>
#include<string>
#include<cassert>
using namespace std;
void f()
{
	cout << "调用void f()";
}
void f(int i)
{
	cout << "调用void f(int i)" << endl;
}
void f(int, int)
{
	cout << "调用void f(int, int)" << endl;
}
void f(double, double = 3.14)
{
	cout << "调用void f(double, double = 3.14)" << endl;
}

int main()
{
	//	f(2.56,42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
}
