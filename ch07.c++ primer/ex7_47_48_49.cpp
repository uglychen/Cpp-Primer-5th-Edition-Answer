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


--------------------------------------------------------------------------*/