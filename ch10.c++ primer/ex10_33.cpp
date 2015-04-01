#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <fstream>
#include <iterator>

using namespace std;

void function(const string &intput_file, const string &out_file_even, const string &out_file_old)
{
	ifstream fin(intput_file);
	istream_iterator<int> fin_iter(fin), eof;

	ofstream out_even(out_file_even), out_old(out_file_old);//关联输出文件
	ostream_iterator<int> out_even_iter(out_even, " "), out_old_iter(out_old, "\n");//创建输出流迭代器

	//while (fin_iter != eof)
	//{
	//	if ((*fin_iter) % 2 == 0)
	//		*out_even_iter++ = *fin_iter++;
	//	else
	//		*out_old_iter++ = *fin_iter++;
	//}

	for_each(fin_iter, eof, [&](const int i)
	{
		i % 2 ? *out_even_iter++ = i : *out_old_iter++ = i;
	});

	cout << endl;
}

int main()
{
	function("chenxun.txt", "even.txt", "old.txt");
	return 0;
}
