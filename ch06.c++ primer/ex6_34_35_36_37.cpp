/*---------------------------------------------------------------------------

6.34�����ʵ��Ϊ�������ᷢ�������ջ�����

6.35������val--�޷��ݹ顣

6.36��string (&fun(string s))[10]

6.37��
string(&fun(string s))[10];
typedef  string sPtr[10];
using sPtr = string[10];
sPtr &fun(string s);
string str[10];
decltype(str) &fun(string s);
auto fun(string s)->string (&)[10];

----------------------------------------------------------------------------*/