#include<iostream> 
#include<vector>  
#include<iterator>  
using namespace std;
int main()
{
	vector<int> ivec{ 0, 1, 2, 3, 4, 5, 6, 7, 7, 8, 9 };
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		*it = (*it) * (*it);

	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it << ' ';

	return 0;
}
