#include<iostream>
#include<string>
using namespace std;

class Screen{
public:
	typedef string::size_type pos;

	Screen() = default;
	Screen() : cursor(0), height(0), width(0) { }
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c){ }

	//��ĳ�Ա������
	char get() const{ return contents[cursos]; }

	inline char get(pos ht, pos wd) const;//���ع����ָ���ַ�

	Screen &move(pos r, pos c);

private:
	pos cursos;
	pos height, width;
	string contents;//ע�Ȿclass�ĳ�Աstring�����ʼ���ķ�ʽ��
};

/*---------------------------------------------------------------------

7.25�𣺲�����ȫ�����������������ͻ�������ͳ�Ա����Ӧ��������ڲ���ʼ����Щ���ݣ�
	���߶���һ���Լ���Ĭ�Ϲ��캯�������������ڴ�������ʱ�Ϳ��ܵõ�δ�����ֵ��

-----------------------------------------------------------------------*/