#include<iostream>	
using namespace std;
int main()
{
	const size_t sz = 10;
	int a1[sz];
	int a2[sz];
	for (size_t i = 0; i != 10; ++i)
		a1[i] = i;
	for (size_t i = 0; i != 10; ++i)
		a2[i] = a1[i];
	for (size_t i = 0; i != 10; ++i)
		cout << a1[i] << endl;
}

/*--------------------------------------------------------
//¸Ä³Évector£º
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> ivec1;
	vector<int> ivec2;
	for (int index = 0; index != 10; index++)
		ivec1.push_back(index);
	for (auto it = ivec1.begin(); it != ivec1.end(); it++)
		ivec2.push_back(*it);
	for (auto it = ivec2.begin(); it != ivec2.end(); it++)
		cout << *it << endl;
	return 0;
}

----------------------------------------------------------*/
