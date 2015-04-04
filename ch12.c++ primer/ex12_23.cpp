#include<iostream>
#include<string>
using namespace std;

char *my_concat1(const char* const s1, const char *const s2)
{
	char *const result = new char[sizeof(s1)+sizeof(s2)+5];
	char *my_result = result;

	const char*my_s1 = s1;
	const char*my_s2 = s2;
	while (*my_s1 != '\0')
	{
		*my_result = *my_s1;
		++my_result;
		++my_s1;
	}

	while (*my_s2 != '\0')
	{
		*my_result = *my_s2;
		++my_result;
		++my_s2;
	}

	*my_result = '\0';

	return result;
}

char *my_concat2(const std::string s1, const std::string s2)
{
	char *const result = new char[sizeof(s1)+sizeof(s2)+5];
	char *my_result = result;

	for (const auto &s : s1)
	{
		*my_result = s;
		++my_result;
	}

	for (const auto &s : s2)
	{
		*my_result = s;
		++my_result;
	}

	*my_result = '\0';

	return result;

}

int main()
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	char*my_char = my_concat2(s1, s2);
	cout << my_char << endl;
	delete[] my_char;

	return 0;
}
