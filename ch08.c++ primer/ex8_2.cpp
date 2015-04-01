#include<iostream>
using namespace std;

istream &f(istream&in)
{
	int ival;
	while (in >> ival, !in.eof())
	{
		if (in.bad())
			throw runtime_error("IO stream corrupted");

		if (in.fail())
		{
			cerr << "error input, please  try again";
			in.clear();
			in.setstate(istream::eofbit);
			continue;
		}
		cout << ival << endl;
	}
	in.clear();
	return in;
}

int main()
{
	cout << "please input an number: " << endl;
	f(cin);
	return 0;
}
