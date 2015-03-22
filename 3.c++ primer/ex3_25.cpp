#include<iostream> 	
#include<vector>	
#include<iterator>	
using namespace std;
int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	vector<unsigned>::size_type n = 0;
	while (cin >> grade)
	{
		n = grade / 10;
		vector<unsigned>::iterator it = scores.begin();
		it = it + n;
		(*it)++;
	}
	for (auto itr : scores)
	{
		cout << itr << ' ';
	}
}
