/*------------------------------------------------------------------------------------


9.32答：不合法，当iter指向尾后迭代器的时候是非法的（未定义的行为）。

9.33答：未定义的行为。运行错误。

9.34答：当碰到第一个奇数的时候就发生无限循环。

9.35答：capacity表示容易在重新分配空间之前的可以容纳元素的个数，而seize表示容器当前所存储的元素的个数。

9.36答：capacity只能大于等于size。

9.37答：list不需要对内存重新分配，在插入元素的对对数据分配空间就可以，然后把数据链接到list中就可以了。

9.38答：push_back、resize、capacity。

9.39答：将svec的capacity至少为1024，然后从输入设备添加元素，然后将其大小改成其读入的word个数的1.5倍。

9.40答：当读入256或512个数的时候capacity是1024.读入1000个的时候变成1536.读入1048的时候变成2034.



--------------------------------------------------------------------------------------*/