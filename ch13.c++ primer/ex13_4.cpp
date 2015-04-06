
#include<iostream>


class Point
{
public:
	int i;
};

Point global;
Point foo_bar(Point arg) //  调用此函数时，将实参对象的副本传递给形参Point的对象 arg
{
	Point local = arg;   //  调用复制构造函数，将局部对象 local初始化为形参arg的副本。

	Point *heap = new Point(global);   //  调用复制构造函数用全局对象 global来初始化Point 对象 *heap

	*heap = local;

	Point pa[4] = { local, *heap };   //  使用数组初始化列表来初始化数组的每个元素。调用复制构造函数

	return *heap;    //  从函数返回 Point 对象*heap的副本
}