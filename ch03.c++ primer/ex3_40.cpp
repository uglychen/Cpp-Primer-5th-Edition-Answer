#include<iostream>	
#include<cstring>	
using namespace std;
int main()
{
	const char *s1 = "chen xun ";
	const char *s2 = "is a good man";
	char *s3 = (char*)malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(s3, s1);
	strcat(s3, s2);
	cout << s3 << endl;
	free(s3);
	s3 = NULL;
	return 0;
}//如果你碰到error：4996请你Google，相信你能解决，呵呵。

