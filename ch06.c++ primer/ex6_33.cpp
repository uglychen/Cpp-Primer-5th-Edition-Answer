//#include <iostream>
//#include <vector>
//using namespace std;
//void my_print(vector<int> ivec);
//
//int main()
//{
//	vector<int> ivec;
//	for (decltype(ivec.size()) i = 0; i != 200; i++)
//	{
//		ivec.push_back(i);
//	}
//	my_print(ivec);
//	return 0;
//}
//
//static size_t i = 0;
//void my_print(vector<int> ivec)
//{
//	if (i != ivec.size())
//	{
//		cout << ivec[i++] << endl;
//		my_print(ivec);
//	}
//}

#include<iostream>
#include<string>
#include<vector>

using namespace std;

template <typename T>
void  vector_print(const vector<T> &_v);

template <typename Iterator>
void printVector(Iterator first, Iterator last);

template<class T>
void vector_print(const vector<T> &_v)
{
	static typename vector<T>::const_iterator it = _v.begin();
	cout << *it
		<< " ";

	++it;

	if (it != _v.end())
	{
		vector_print(_v);
	}
}

template <typename Iterator>
void printVector(Iterator first, Iterator last)
{
	if (first != last)
	{
		std::cout << *first << " ";
		printVector(std::next(first), last);
	}
}

int main()
{
	string s;
	vector<string> v;

	cout << "Please Enter:\n";
	while (cin >> s)
	{
		v.push_back(s);
		printVector(v.begin(), v.end());
	}
}