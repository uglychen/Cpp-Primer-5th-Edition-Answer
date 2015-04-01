/*-------------------------------------------------------------------------


7.47答：应该可以声明为explicit，这样可以防止编译器进行隐式的类型转换即把一个string对象
转换成sales_data对象，避免造成不必要的语义错误。加上explicit后，要创建sales_data对象时
候我们必须显示的去创建，不要依赖编译器去帮你隐式的转换。

7.48答：
（1）.调用接收一个C风格字符串形参的string构造函数，创建一个临时的string对象，然后调用string
类的复制构造函数，将null_isbn初始化为该该临时对象的副本。

（2）.使用string的对象null_isbn为实参，调用Sales_item类的构造函数创建Sales_item对象null1.

（3）.使用接受一个C风格字符串形参的string类的构造函数，生成一个临时string对象，然后用这个临时
对象作为实参，调用Sales_item类的构造函数来创建Sales_item类的对象null.
如果sales_data的构造函数时explicit，那么第三个将是未定义的行为。编译通不过。


7.49答：（a）可以进行隐式的类型的转换（b）可以进行隐式类型转换（c）可以

7.50答：
class person
{
public:
person() = default;
person(string pName, string pAddress)
{
name = pName;
address = pAddress;
}
istream &read(istream &is, person &data)
{
is >> data.name >> data.address;
return is;
}

ostream &print(ostream &os, const person &data)
{
cout << data.name << ' ' << data.address;
return os;
}
private:
string name;
string address;
};
没有可以声明为explicit的构造函数。


7.51答：假如在一个函数调用一个vector<int>对象的时候，我们只给函数传递一个实参42的时候，
不知道编译发生何种情况，这个实参倒是被隐式的转成一个vector对象还是一个整形变量42.所以我
们有必须把vector函数一个参数的构造函数声明为explicit。而string则没有必要声明一个参数的
构造函数为explicit，这样就可以把c风格的字符串转换成string对象。


--------------------------------------------------------------------------*/