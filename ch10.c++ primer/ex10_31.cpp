#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <fstream>
#include <iterator>

using namespace std;

int main()
{
	vector<int> ivec;
	istream_iterator<int>  cin_iter(cin), eof;
	while (cin_iter != eof)
		ivec.push_back(*cin_iter++);

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;

	sort(ivec.begin(), ivec.end());

	ostream_iterator<int> cout_iter(cout, " ");
	for (auto e : ivec)
		*cout_iter++ = e;
	cout << endl;

	copy(ivec.begin(), ivec.end(), cout_iter);
	cout << endl;


	unique_copy(ivec.begin(), ivec.end(), cout_iter);
	cout << endl;

	return 0;
}

