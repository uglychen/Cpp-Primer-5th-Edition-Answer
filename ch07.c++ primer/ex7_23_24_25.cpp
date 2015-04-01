#include<iostream>
#include<string>
using namespace std;

class Screen{
public:
	typedef string::size_type pos;

	Screen() = default;
	Screen() : cursor(0), height(0), width(0) { }
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c){ }

	//类的成员函数；
	char get() const{ return contents[cursos]; }

	inline char get(pos ht, pos wd) const;//返回光标所指的字符

	Screen &move(pos r, pos c);

private:
	pos cursos;
	pos height, width;
	string contents;//注意本class的成员string对象初始化的方式；
};

/*---------------------------------------------------------------------

7.25答：不能完全依赖，含有内置类型或符合类型成员的类应该在类的内部初始化这些数据，
	或者定义一个自己的默认构造函数。否则用于在创建对象时就可能得到未定义的值。

-----------------------------------------------------------------------*/