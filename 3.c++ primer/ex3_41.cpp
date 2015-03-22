#include<iostream>	
#include<vector>	
using namespace std;
int main()
{
	int a[5] = { 1, 2, 3, 4 };
	//	vector<int> ivec(a, a + 5);
	vector<int> ivec(begin(a), end(a));
	for (auto i : ivec)
		cout << i << ' ';
	cout << endl;
	return 0;
}



