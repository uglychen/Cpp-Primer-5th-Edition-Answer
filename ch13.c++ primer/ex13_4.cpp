
#include<iostream>


class Point
{
public:
	int i;
};

Point global;
Point foo_bar(Point arg) //  ���ô˺���ʱ����ʵ�ζ���ĸ������ݸ��β�Point�Ķ��� arg
{
	Point local = arg;   //  ���ø��ƹ��캯�������ֲ����� local��ʼ��Ϊ�β�arg�ĸ�����

	Point *heap = new Point(global);   //  ���ø��ƹ��캯����ȫ�ֶ��� global����ʼ��Point ���� *heap

	*heap = local;

	Point pa[4] = { local, *heap };   //  ʹ�������ʼ���б�����ʼ�������ÿ��Ԫ�ء����ø��ƹ��캯��

	return *heap;    //  �Ӻ������� Point ����*heap�ĸ���
}