#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch, c = '\0';
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	while (cin >> ch)
	{
		if (c == 'f')
		{
			switch (ch)
			{
			case 'f':
				ffCnt++;
				break;
			case 'l':
				flCnt++;
				break;
			case 'i':
				fiCnt++;
				break;
			default:
				break;
			}
		}
		c = ch;
	}
	cout << ffCnt << endl << flCnt << endl << fiCnt << endl;
	return 0;
}
