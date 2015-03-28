#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
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
			cerr << "bad shuru, please  try again";
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
	int i = 1, k = 2;

	ostringstream file;

	file << i << k << endl;

	istringstream input_string(file.str());

	f(input_string);

	return 0;
}
