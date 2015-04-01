#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
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
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newlineCnt;
			break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << endl
		<< "Number of vowel space: \t" << spaceCnt << endl
		<< "Number of vowel tab: \t" << tabCnt << endl
		<< "Number of vowel newline: \t" << newlineCnt << endl;
	return 0;
}
