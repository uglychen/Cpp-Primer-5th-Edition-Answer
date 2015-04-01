#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
istream &f(istream &in)
{
	//int sval;注意第一题中 这里改成下面的string sval；
	string sval;
	while (in >> sval, !in.eof())
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
		cout << sval << endl;
	}

	in.clear();
	return in;
}


int main()
{
	string fileName;
	cin >> fileName;
	ifstream readfile;
	readfile.open(fileName);
	if (!readfile)
	{
		cerr << "open the input file failed" << endl;
		return -1;
	}

	f(readfile);
	system("pause");
	return 0;
}
