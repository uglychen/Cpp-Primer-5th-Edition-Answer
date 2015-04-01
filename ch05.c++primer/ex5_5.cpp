#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	vector<unsigned> grades;
	unsigned grade;

	while (cin >> grade)
		grades.push_back(grade);

	for (vector<unsigned>::const_iterator it = grades.begin();it != grades.end(); ++it)
	{
		cout << *it << " ";
		string lettergrade;
		if (*it < 60)
			lettergrade = scores[0];
		else
		{
			lettergrade = scores[(*it - 50) / 10];
			if (*it != 100)
			{
				if (*it % 10 > 7)
					lettergrade += '+';
				else if (*it % 10 < 3)
					lettergrade += '-';
			}
		}
		cout << lettergrade << endl;
	}
}
