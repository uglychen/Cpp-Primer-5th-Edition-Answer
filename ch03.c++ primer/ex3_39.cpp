//比较两个string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1 = "chen xun";
	string s2 = "chen xun chen";
	if (s1 > s2)
		cout << s1 << endl;
	else
		cout << s2 << endl;;
}

/*-----------------------------------------
//比较两个c风格的字符串：调用库函数strcmp
#include<iostream>
#include<string>
using namespace std;
int main()
{
	const char s1[] = "chen xun";
	const char s2[] = "chen xun chen ";
	if (strcmp(s1, s2)>0)
		cout << s1 << endl;
	else
		cout << s2 << endl;
	return 0;
}

-------------------------------------------*/
