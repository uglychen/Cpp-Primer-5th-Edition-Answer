#include <iostream>

using namespace std;

/*
	Args ��һ��ģ���������rest��һ������������
	Args��ʾ0������ģ�����Ͳ���
	reset��ʾ0��������������
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