#include "message.h"
#include "folder.h"
#include <iostream>

int main()
{
	Message m("sss");

	Folder f1("folder1");

	m.save(f1);

	Folder f2;
	swap(f1, f2);

	std::cout << "done!\n";


	return 0;
}
