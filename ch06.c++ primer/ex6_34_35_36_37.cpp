/*---------------------------------------------------------------------------

6.34答：如果实参为负数，会发生程序堆栈溢出。

6.35答：是用val--无法递归。

6.36答：string (&fun(string s))[10]

6.37答：
string(&fun(string s))[10];
typedef  string sPtr[10];
using sPtr = string[10];
sPtr &fun(string s);
string str[10];
decltype(str) &fun(string s);
auto fun(string s)->string (&)[10];

----------------------------------------------------------------------------*/