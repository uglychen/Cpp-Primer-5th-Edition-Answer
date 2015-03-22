#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch) {
		case 'A':
		case 'a':
			++aCnt;
			break;
		case 'E':
		case 'e':
			++eCnt;
			break;
		case 'I':
		case 'i':
			++iCnt;
			break;
		case 'O':
		case 'o':
			++oCnt;
			break;
		case 'U':
		case 'u':
			++uCnt;
			break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << endl;
	return 0;
}
