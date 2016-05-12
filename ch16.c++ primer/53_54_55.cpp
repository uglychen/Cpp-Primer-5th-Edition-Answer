#include <iostream>

using namespace std;

/*
	Args 是一个模板参数包，rest是一个函数参数包
	Args表示0个或多个模板类型参数
	reset表示0个或多个函数参数
	template <typename T, typename... Args>
	void foo(T&, const Args&... rest);
*/

class A
{
public:
	int a = 1;
	int b = 2;
};

template<typename T, typename ...Args>
void foo(T t, Args ...args)
{
	std::cout << sizeof...(Args) << std::endl;
	std::cout << sizeof...(args) << std::endl;
}

template <typename T>
std::ostream& my_print(ostream &os, const T& t)
{
	return os << t;
}

template <typename T, typename... Args>
std::ostream& my_print(ostream &os, const T &t, const Args&... args)
{
	os << t;
	return my_print(os, args...);
}

int main()
{
	//foo(1, 2, 3, 4, "chenxun");
	//foo(1,2,3,4,5,6,7);
	my_print(std::cout, 1, 2, 3, 4);
	my_print(std::cout, "chen1", "chen2", "chenxun", 1, 2, 3, 4);
}