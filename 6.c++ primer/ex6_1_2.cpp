/*---------------------------------------------------------------------------

6.1答：实参是形参的初始值，实参的类型必须与对应的形参类型匹配。形参是在函数的形参列
	表中进行定义的，我们实参的值去初始化形参。

（1）形参变量只有在被调用时才分配内存单元，在调用结束时， 即刻释放所分配的内存单元。
	因此，形参只有在函数内部有效。 函数调用结束返回主调函数后则不能再使用该形参变量。

（2）实参可以是常量、变量、表达式、函数等， 无论实参是何种类型的量，在进行函数调用时，
	它们都必须具有确定的值， 以便把这些值传送给形参。 因此应预先用赋值，输入等办法使实参获得确定值。

（3）实参和形参在数量上，类型上，顺序上应严格一致， 否则会发生“类型不匹配”的错误。

（4）函数调用中发生的数据传送是单向的。 即只能把实参的值传送给形参，而不能把形参的值反向地传送给实参。
	因此在函数调用过程中，形参的值发生改变，而实参中的值不会变化。

（5）当形参和实参不是指针类型时，在该函数运行时，形参和实参是不同的变量，他们在内存中位于不同的位置，
	形参将实参的内容复制一份，在该函数运行结束的时候形参被释放，而实参内容不会改变。而如果函数的参数是
	指针类型变量,在调用该函数的过程中，传给函数的是实参的地址，在函数体内部使用的也是实参的地址，即
	使用的就是实参本身。所以在函数体内部可以改变实参的值。

6.2答：（a）返回类型错误；（b）没有定义函数的返回类型；（c）函数体缺少左花括号；（d）函数体缺少一对花括号；


----------------------------------------------------------------------------*/