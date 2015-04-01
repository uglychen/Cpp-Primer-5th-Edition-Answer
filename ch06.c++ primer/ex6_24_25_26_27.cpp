
//6.24答：没有什么问题，依次输出数组元素；

//6.25答：
#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
	if (argc > 2) {
		std::string str = argv[1];
		str += argv[2];
		std::cout << str << std::endl;
	}
	else {
		std::cout << "error" << std::endl;
	}
	return 0;
}

//6.26答：
#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
	for (int i = 0; i<argc; i++)
	{
		std::cout << i + 1 << "," << argv[i] << std::endl;
	}
	return 0;
}


//6.27答：
#include<vector>
using namespace std;
int my_add(const int *beg, const int *end)
{
	int sum = 0;
	while (beg != end)
	{
		sum += *beg++;
	}
	return sum;
}
int main()
{
	int sumVal;
	const int a[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	sumVal = my_add(a, a + sizeof(a) / sizeof(*a));
	cout << sumVal << endl;
}
