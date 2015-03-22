#include<iostream> 	
#include<vector>		
using namespace std;

int main()
{
	vector<int> ivec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (vector<int>::iterator itr = ivec.begin(); itr != ivec.end(); ++itr)
		*itr = ((*itr % 2 == 0) ? *itr : *itr * 2);
	for (auto itr = ivec.begin(); itr != ivec.end(); ++itr)
		cout << *itr << ' ';
	cout << endl;
	return 0;
}
