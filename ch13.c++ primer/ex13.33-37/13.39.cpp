#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<utility>
#include<allocators>
#include <algorithm>
using namespace std;

class StrVec
{
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr){ }

	StrVec(std::initializer_list<std::string> l);
	
	StrVec(const StrVec&);//copy constructor

	StrVec& operator=(const StrVec&);//copy assignment

	~StrVec();

	void push_back(const std::string&);//copy

	size_t size() const { return first_free - elements; }

	size_t capacity() const { return cap - elements; }

	std::string *begin() const{ return elements;}

	std::string *end() const { return first_free; }
	/******************************************************/
	void reserve(std::size_t n);
	void resize(std::size_t n);
	void resize(std::size_t n, const std::string& s);
	/******************************************************/

private:
	static std::allocator<std::string> alloc;

	void chk_n_alloc()
	{
		if (size() == capacity())
			reallocate();
	}

	std::pair<std::string*, std::string*> alloc_n_copy
		(const std::string*, const std::string*);

	void free();

	void reallocate();

	std::string *elements;
	std::string *first_free;
	std::string *cap;
};

StrVec::StrVec(const StrVec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::StrVec(std::initializer_list<std::string> l)
{
	//! allocate memory as large as l.size()
	std::string * const
		newData = alloc.allocate(l.size());

	//! copy elements from l to the address allocated
	auto p = newData;
	for (const auto &s : l)
		alloc.construct(p++, s);

	//! build the data structure
	elements = newData;
	first_free = cap = elements + l.size();
}

StrVec&StrVec::operator=(const StrVec &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

StrVec::~StrVec()
{
	free();
}

void StrVec::push_back(const std::string& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

/*
std::pair<std::string *, std::string*> StrVec::alloc_n_copy(const string*b, const string *e)
{
	auto data = alloc.allocate(e - b);
	return{ data,uninitialized_copy(b, e, data) };
}*/

std::pair<std::string *, std::string*> StrVec::alloc_n_copy( string* b, string* e)
{
	std::string* const data = alloc.allocate(e - b);
	std::string* p = data;
	std::string* i;
	for (i=b;i != e; i++)
	{
		alloc.construct(p++, *i);
	}
	return { data, p };
	//return{ data, uninitialized_copy(b, e, data) };
}





void StrVec::free()
{
	if (elements)
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}

void StrVec::reserve(std::size_t n)
{
	//! if the n is too small, just ignore it.
	if (n <= capacity())  return;

	//! allocate and move old ones into the new address.
	auto newdata = alloc.allocate(n);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + n;
}

void StrVec::resize(std::size_t n)
{
	resize(n, std::string());
}

void StrVec::resize(std::size_t n, const std::string &s)
{
	if (n < size())
	{
		//! destroy the range : [element+n, first_free) using destructor
		for (auto p = elements + n; p != first_free; /* empty */)
			alloc.destroy(p++);

		//! move frist_free point to the new address element + n
		first_free = elements + n;
	}
	else if (n > size())
	{
		for (auto i = size(); i != n; ++i)
			push_back(std::string(s));
	}
}


int main()
{
	StrVec v={ "1\n", "2\n", "3\n", "4\n", "5\n" }, v2;

	v = v2;

	v.push_back("alan\n");

	std::cout << v.size() << "\n";
	std::cout << v.capacity() << "\n";
	std::cout << "=============\n";

	for (const auto &s : v)
		std::cout << s;

	return 0;
}
