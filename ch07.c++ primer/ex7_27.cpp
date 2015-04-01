#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Screen{
public:
	typedef string::size_type pos;

	Screen() : cursor(0), height(0), width(0){ }
	Screen(pos ht = 0, pos wd = 0) : cursor(0), height(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c) : cursor(0), height(ht), width(wd), contents(ht * wd, c) { }

	friend class Window_mgr;

	//类的成员函数；
	char get() const{ return contents[cursor]; }

	inline char get(pos ht, pos wd) const;//返回光标所指的字符

	Screen &clear(char = bkground);

private:
	static const char bkground = ' ';
public:
	Screen &move(pos r, pos c);
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}


private:
	pos cursor;
	pos height, width;
	string contents;//注意本class的成员string对象初始化的方式；
	void do_display(std::ostream &os) const { os << contents; }
};

Screen &Screen::clear(char c)
{
	contents = std::string(height*width, c);
	return *this;
}

inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r*width;
	return contents[row + c];
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

int main()
{
	Screen myScreen(5, 5, 'x');
	myScreen.display(cout); cout << endl;
	myScreen.move(4, 0).set('#').display(cout);
	cout << endl;
	myScreen.display(cout);
	cout << endl;
}
