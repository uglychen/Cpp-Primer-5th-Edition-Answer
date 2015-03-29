#include<iostream>
#include<string>
using namespace std;
int main()
{
	string::size_type pos = 0;
	string numbers("0123456789");
	string s1 = "ab2c3d7R4E6";

	//while ((pos = s1.find_first_of(numbers, pos)) != string::npos)
	//{
	//	cout << pos << ' ' << s1[pos] << endl;
	//	pos++;
	//}

	while ((pos = s1.find_first_not_of(numbers, pos)) != string::npos)
	{
		cout << pos << ' ' << s1[pos] << endl;
		pos++;
	}

	return 0;
}
