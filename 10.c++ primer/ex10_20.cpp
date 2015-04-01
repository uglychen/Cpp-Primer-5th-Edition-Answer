#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int my_count_if(vector<string> &words)
{
	auto index = count_if(words.begin(), words.end(), [](const string &s){return s.size() > 6; });

	return index;
}

int main()
{
	vector<string> svec{ "chenxun", "chen", "chenxun2", "chen1", "chenxun2" };

	int i = my_count_if(svec);

	cout << i << endl;

	return 0;
}
