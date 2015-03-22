//3.18答：不合法：ivec是一个空的vector，根本不包含任何元素，是不能通过下标去访问任何元素，这个时候
//只能使用push_back向vector中添加元素。vector下标运算符可以用于访问已经存在的元素，而不能用来添加元素。

//3.19答：vector<int> ivec(10, 42);  vector<int> ivec{ 42, 42, …… }; vector<int> ivec = { 42, 42, …… };
其实还可以另外已知的来初始化ivec，也可以用添加元素的方法。
