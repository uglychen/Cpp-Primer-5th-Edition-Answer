#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class String {
public:
	String() : String("") {}
	String(const char*);
	String(const String&);
	String& operator=(const String&);
	~String();

	const char* c_str() const { return elements; }
	size_t size() const { return end - elements; }
	size_t length() const { return end - elements - 1; }

private:
	std::pair<char*, char*> alloc_n_copy(const char*, const char*);
	void free();

private:
	char* elements;
	char* end;
	std::allocator<char> alloc;
};

std::pair<char*, char*> String::alloc_n_copy(const char* b, const char* e)
{
	auto data = alloc.allocate(e - b);
	return{ str, std::uninitialized_copy(b, e, data) };
}

String::String(const char*s)
{
	auto p = s;
	std::size_t n = sizeof(p);
	auto q = alloc_n_copy(p,p+n);
	elements = q.first;
	end = q.second;
}

String::String(const String& rhs)
{
	auto q = alloc_n_copy(rhs.elements, rhs.end);
	elements = q.first;
	end = q.second;
}

String& String::operator = (const String& rhs)
{
	auto newstr = alloc_n_copy(rhs.elements, rhs.end);
	free();
	elements = newstr.first;
	end = newstr.second;
	std::cout << "copy-assignment" << std::endl;
	return *this;
}

void String::free()
{
	if (elements) 
	{
		std::for_each(elements, end, [this](char& c) { alloc.destroy(&c); });
		alloc.deallocate(elements, end - elements);
	}
}

String::~String()
{
	free();
}
