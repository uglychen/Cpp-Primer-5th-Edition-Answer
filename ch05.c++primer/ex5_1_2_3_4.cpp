/*----------------------------------------------------------

5.1答：最简单的是空语句，空语句中只含有一个单独的分号；
	while（cin>>s&&s!=sought）
	;//空语句

5.2答：块是用花括号括起来的语句和声明的序列，其实就是复合语句。在while循环中就用到块。

5.3答：while（int sum=0，val=1；val<=10;sum+=val,++val）

5.4答：（a）itr没有初值，应该在前面加上auto itr=s.begin()；（b）应是用find函数查找
		某个单词，但是word的没有初值，应该while之前给word赋值；

------------------------------------------------------------*/