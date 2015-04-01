//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int ival1, ival2;
//	cin >> ival1 >> ival2;
//	if (ival2 == 0)
//		throw runtime_error("第二个数为0");
//	cout << ival1 + ival2 << endl;
//}
//

//5.25答：
#include <iostream>
#include<string>
using namespace std;
int main()
{
	int ival1, ival2;
	while (cin >> ival1 >> ival2)
	{
		try{
			if (ival2 == 0)
				throw runtime_error("第二个数为0");
			cout << ival1 + ival2 << endl;
		}
		catch (runtime_error err){
			cout << err.what()
				<< "\nTry Again?  Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
}


