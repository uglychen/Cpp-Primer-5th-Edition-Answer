#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec{ 3, 1 };

	if (!ivec.empty())
	{
		cout << ivec.at(0) << endl;
		cout << ivec.front() << endl;
		cout << *ivec.cbegin() << endl;
		cout << ivec[0] << endl;
	}

	return 0;
}
