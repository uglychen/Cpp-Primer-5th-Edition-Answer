#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<algorithm>
class String
{
public:
	String();
	//! constructor taking C-style string i.e. a char array terminated with'\0'.
	explicit String(const char * const c);

	~String();

private:
	//! data members
	char* elements;
	char* first_free;
	char* cap;

	std::allocator<char> alloc;
	//! utillities for big 3
	void free();
};

//! default constructor
String::String() :elements(nullptr), first_free(nullptr), cap(nullptr){}

//! constructor taking C-style string i.e. a char array terminated with'\0'.
String::String(const char *  const c) : elements(nullptr), first_free(nullptr), cap(nullptr)
{
	auto p = c;
	char* newData = alloc.allocate(sizeof(p));

	std::uninitialized_copy(p, (p + sizeof(p)), newData);

	//! build the data structure
	elements = newData;
	cap = first_free = newData + sizeof(c);
}

//! destructor
String::~String()
{
	free();
}

//! destory and deallocate
void String::free()
{
	if (elements)
	{
		//! destroy all elements
		std::for_each(&elements, &first_free, [&](const char* p){
			alloc.destroy(p);
		});

		alloc.deallocate(elements, cap - elements);
	}
}

