#include <iostream> 
#include <string> 
#include <stack> 
#include <deque> 

using namespace std;

int main(int argc, char**argv[])
{
	stack<char> sExp;
	string strExp;
	cout << " Input a expression: ";
	cin >> strExp;

	// deal the sExp 
	string::iterator it = strExp.begin();
	while (it != strExp.end())
	{
		if (*it != ')')
			sExp.push(*it);
		else
		{
			while ((sExp.top() != '(') && !sExp.empty())
			{
				sExp.pop();
			}
		}

		if (sExp.empty())
			cout << " It's not matched. " << endl;
		else
		{
			sExp.pop();
			sExp.push('@');
		}

		++it;
	}

	// show out the elements of the stack 
	cout << "\nThe elements of the stack are:" <<
		endl;
	while (!sExp.empty())
	{
		cout << sExp.top() << endl;
		sExp.pop();
	}

	system("pause");
	return 0;
}
