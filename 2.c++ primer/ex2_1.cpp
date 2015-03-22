/*
2.1答： <1>他们在不同的系统中其存储空间是有所差别，在32位系统中short、int、long、long long分别占2、4、4、8个byte（字节）。
			C++语言规定一个int型至少和一个short型一样大，一个long型至少和一个int一样大，一个long long至少和一个long型大，
			其中long long是在c++ 11中新定义的。double、float都是浮点型，double（双精度型）比float（单精度型）存的数据更
			准确些，占的空间也更大。在32位系统中float占4个字节（byte），double占8个字节。
		<2>带符号可以表示正数、负数、0，无符号只能用来表示大于0的值。

2.2答： 对于利率、本金和付款选择数据类型根据数据的精度需要来选择。一般选择利率选择float（一般保留小数点后2位数，单精度足够），
	   本金选择long (现在都是有钱人，10位数满足不了那些土豪们就用long long 吧，呵呵)，付款额一般为实数,可以选择 double 类型。

2.3答：	32 、2^32-32、32、-32、0、0

2.5答：  （a） 'a'为char型字面值，L'a'为wchar_t型字面值，"a"为字符串型字面值，L"a"为宽字符串型字面值。
	    （b） 10 为int型字面值， 10u为unsigned型字面值，10L为long型字面值，10uL为unsigned long型字面值，
			  012 为八进制表示的int型字面值，0xC为十六进制表示的int型字面值。
		（c）3.14 为double型字面值，3.14f为float型字面值，3.14L为long double型。
		（d）10 为int型字面值，10u为unsigned型字面值，10.为int字面值，10e-2（0.1）为foat型字面值。

2.6答：int month=9，day=7；与int month=09，day=07；都是int型但是第二种方法是用八进制，所09会出错，八进制范围为0~7；可以改为int month=011；

2.7答： （a）145表示字符e，012表示换行符 
		（b）31.4 为long double型
		（c）1024f 为float型               
		（d）3.14L为long double

2.8答： cout << "2\115\n" << endl;  				 
        cout << 2 << endl; cout << "\115" << endl;

2.9答：	（a）错误，应该先定义。（b）这种方式不能进行转换
		（c）正确（d）可以，转换成功过后小数部分丢失。

2.10答：global_str 、local_str为空字符串，global_int默认初始化为0，local_int没有初值。

2.11答：extern  int ix=1024；定义	 int iy；声明并定义  extern int iz；声明

2.12答：（a）关键字不能作为变量名	（b） int  _i;在函数体外这种写法是错误的，在函数体内可以用下划线开头的变量名。
		（c）int catch-22；错误。（d）正确，可以用下划线分割多个单词（e） 正确，变量名区分大小写；

2.13答：i=j=100；

2.14答：合法，输出结果为i的值为100,和为45。for 语句中定义的变量i，其作用域仅限于for
		语句内部，输出的i 值是for 语句之前所定义的变量i 的值。

2.15答：合法、非法、合法、非法。引用必须初始化，引用是对对象的引用，不能绑定一个字面值。
		引用并非对象，相反的它只是为一个已经存在的对象所起一个别名（绰号）。

2.16答：都合法。

2.17答：输出结果为：i和r1的值都为10.

2.18答：#include<iostream>
		using namespace std;
		int main()
		{
			int *p = 0;
			int ival1= 1;
			int ival2 = 2;
			p = &ival1;
			cout << *p << endl;
			p = &ival2;//改变指针指向的对象
			cout << *p << endl;
			ival2 = 3;//改变指针指向的对象的值
			cout << *p <<endl<< ival2 << endl;
		}//输出结果为：1、2、3、3.

2.19答：指针和引用都能提供对其他对象的间接访问，然而在具体实现细节上二者有很大的不同，其中最重要的一
		点就是引用本身并非一个对象，一旦定义了引用，就无法令其再绑定到另外的对象上去，之后每次使用这
		个引用都是访问它最终绑定的那个对象。指针和它存放的地址之间就没有这种限制了。和其他任何变量
		（只要不是引用）一样，给指针赋值就是令它存放一个新的地址，从而指向一个新的对象。

2.20答：指针指向对象i，然后把指针指向的对象i的值翻倍。输出i的值为42的平方。

2.21答：（a）和（b）非法。请查看相关的类型转换规则。（c）正确

2.22答：if（p）判断指针p本身是否合法，if（*p）判断指针p所指向的内容。

2.23答：不能，要使指针指向有效的对象是程序员所做的事情，如果让它指向一个有效的对象,它就是有效的,
		如果它指向的对象已经无效, 则将其置为 NULL; 而在使用这个指针之前, 应该判断它是否为NULL！。

2.24答： void*是一种特殊的指针类型，可以用于存放任意类型对象的地址，而long*型不能用来存放int类型的地址。

2.25答：（a）ip是未初始化int型指针，i是未初始化int的变量，而r是对象i的引用。
		（b）i是未初始化int型的变量，ip是一个初始化为int型的空指针。
		（c）ip是未初始化的int型指针，ip2是未初始化的int的型变量。

2.26答：（a）未初始化（b）定义并初始化cnt（c）用cnt初始化const int型sz（d）++cnt合法，++sz非法，因为sz是const int型常量。

2.27答：（a）int i= -1合法，&r=0；非法；（b）合法；（c）const int I =-1；合法；const int &r=0；合法（d）合法；（e）合法；（f）未初始化，不合法；（g）合法

2.28答：（a）cp未初始化；（b）p1未初始化的指针，p2为const指针，未初始化；（c）合法；（d）未初始化；（e）未初始化；

2.29答：（b）非法，指针类型不一样；（c）非法，p1为非const指针，ic为const对象；（d）非法P3是const型指针，其值不能被改变；
		（e）非法，p2为const型指针，其值不能改变（f）非法，ic的值不能改变。

2.30答：	cosnt int v2=0；顶层 int v1=v2；合法  v2是一个顶层const；
		const int *p2 = &v2；p2是底层const，v2是一个顶层cosnt；
		const int *cosnt p3=&i；靠右的const是顶层const，靠左的是个底层cosnt；
		const int &r2 =v2；是个底层const；

2.31答：r1=v2；合法，可以用cosnt int v2用来初始化r1；
		P1=p2；非法，p2包含一个底层const，不能忽略；
		P2=p1；合法，p1不包含cosnt；
		P1=p3；非法，p3既包含底层又包含顶层const，p1不含底层const；
		P2=p3；合法，都包含底层const，可以忽略掉p2顶层const；

2.32答：int null=0；*p=null；这是非法的，因为这里null是一个int变量，不能把int变量直接赋值给指针，
		哪怕这int变量恰好等于0也不行；应该改成int*p=nullptr；或int*p=0；

2.33答：d是一个整形指针，运行错误；e是一个指向整型常量的指针，运行错误；g是一个整型常量的引用，运行错误；

2.34答：参考书上给伪代码测试就可以。

2.35答： auto j = i;//j是cosnt int型
		const auto &k = i;//k是const int &型
		auto *p = &i;//p是int *型
		const auto j2 = i, &k2 = i;//j2是const int，k2是const int &型

2.36答：运行结果为：a=4； b=4；c=4；d=4；

2.37答：a=3；b=4；c=3；d=4；

2.38答：const std::vector<int> ival(100);
		auto a = ival[0];// a 为 int 类型
		decltype(ival[0]) b =1;
		// b 为 const int& 类型，std::vector<int>::operator[]（size_type）const 的返回类型
		auto c = 1;// c 为 int 类型
		auto d = c;// d 为 int 类型
		decltype(c) e;// e 为 int 类型，c 为int型
		decltype((c)) f = e;// f 为 int& 型，因为（c）是左值
		decltype(0) g;// g为int类型，因为0是右值

2.39答：编译器会提示分号遗漏；


*/