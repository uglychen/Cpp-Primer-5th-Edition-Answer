#include<iostream> 	
#include<vector>	
#include<string>	
using namespace std;
int main()
{
	vector<int> ivec;
	int  i;
	while (cin >> i)
	{
		ivec.push_back(i);
	}

	for (decltype(ivec.size()) index = 0; index < ivec.size() - 1; index = index + 2)
	{
		cout << ivec[index] + ivec[index + 1] << endl;
	}

	if (ivec.size() % 2 != 0)
		cout << "最后一个元素没有求和" << endl;

	return 0;
}

/*______________________________________________________________________________________
//修改：#include<iostream> 	#include<vector>	#include<string>	using namespace std;
int main()
{
	vector<int> ivec;
	int  i;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	vector<int>::size_type fir = 0;
	vector<int>::size_type last = ivec.size() - 1;
	for (; fir<last; fir++, last--)
	{
		cout << ivec[fir] + ivec[last] << endl;
	}

	if (ivec.size() % 2 != 0)
		cout << "中间一个元素没有求和" << endl;

	return 0;
}

__________________________________________________________________________________________*/