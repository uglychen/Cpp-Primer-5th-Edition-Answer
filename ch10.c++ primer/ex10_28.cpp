#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> vec1;
	list<int> vec2;
	vector<int> vec3;

	copy(ivec.begin(), ivec.end(), back_inserter(vec1));
	for (auto i : vec1)
		cout << i << " ";
	cout << endl;

	copy(ivec.cbegin(), ivec.cend(), front_inserter(vec2));//注意vector和string不支持push_front操作
	for (auto i : vec2)
		cout << i << " ";
	cout << endl;

	copy(ivec.begin(), ivec.end(), inserter(vec3, vec3.begin()));
	for (auto i : vec3)
		cout << i << " ";
	cout << endl;

	return 0;
}
