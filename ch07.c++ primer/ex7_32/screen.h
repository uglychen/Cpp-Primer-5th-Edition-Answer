#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Screen{

	//friend class wyScreen_mgr;
	friend void Window_mgr::clear(ScreenIndex);

public:
	typedef string::size_type pos;
	Screen() : cursor(0), height(0), width(0){ }
	Screen(pos ht, pos wd, const char &c) : cursor(0), height(ht), width(wd), contents(ht * wd, c) { }
	Screen(pos ht = 0, pos wd = 0) : cursor(0), height(ht), width(wd), contents(ht * wd, ' ') { }

	//void Window_mgr::clear(ScreenIndex);
	//��ĳ�Ա������
	char get() const{ return contents[cursor]; }
	inline char get(pos ht, pos wd) const;//���ع����ָ���ַ�
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
	string contents;//ע�Ȿclass�ĳ�Աstring�����ʼ���ķ�ʽ��
	void do_display(std::ostream &os) const { os << contents; }
};


#endif