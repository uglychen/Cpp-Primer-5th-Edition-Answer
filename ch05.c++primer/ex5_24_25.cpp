//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int ival1, ival2;
//	cin >> ival1 >> ival2;
//	if (ival2 == 0)
//		throw runtime_error("�ڶ�����Ϊ0");
//	cout << ival1 + ival2 << endl;
//}
//

//5.25��
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
				throw runtime_error("�ڶ�����Ϊ0");
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


