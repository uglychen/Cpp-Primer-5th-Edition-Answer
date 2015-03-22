#include <iostream>	
#include <string>	
#include <vector>
using namespace std;
int main()
{
	vector<unsigned> grades;
	unsigned i;
	while (cin >> i)
		grades.push_back(i);
	for (vector<unsigned>::const_iterator grade = grades.begin();
		grade != grades.end(); ++grade)
	{
		string finalgrade = (*grade < 60) ? "fail" : "pass";
		finalgrade = (*grade > 90) ? "high pass"
			: (*grade < 60) ? "fail" : "pass";
		cout << *grade << " " + finalgrade << endl;
	}
	return 0;
}
