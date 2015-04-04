#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<string> p1(new string("chenxun"));
	unique_ptr<string>p2(p1);
}
