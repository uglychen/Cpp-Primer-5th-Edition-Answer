#include <iostream>
#include<string>
#include "chapter6.h"
using namespace std;

int fact()
{
	static int cnt = 0;
	return cnt++;
}
