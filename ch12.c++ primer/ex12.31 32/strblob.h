#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <string>
#include <fstream>
using namespace std;


class StrBlobPtr;
/**************************************************************************************/
class StrBlob{
	friend class StrBlobPtr;
public:
	typedef std::vector<std::string>::size_type size_type;

	StrBlob() :data(make_shared<vector<string>>()){}
	StrBlob(initializer_list<string> il) :data(make_shared<vector<string>>(il)){}

	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const std::string &t) { data->push_back(t); }
	void pop_back();
	std::string &front();
	std::string &back();
	const std::string& front() const;
	const std::string& back() const;

	/**
	* @attention   these two members must defined after wy_StrBlobPtr's
	*              declararion and before its definition.
	*/
	StrBlobPtr begin();
	StrBlobPtr end();

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string &msg) const;
};


void StrBlob::check(size_t i, const string &msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}

string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

const std::string& StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

const std::string& StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}



/********************************************************************************/
class StrBlobPtr{
public:
	StrBlobPtr() :curr(0){};
	StrBlobPtr(StrBlob &a, rsize_t sz = 0) :wptr(a.data), curr(sz){ };

	StrBlobPtr(const StrBlob &a, const size_t sz = 0) : wptr(a.data), curr(sz) { }


	std::string &deref() const;
	StrBlobPtr &incr();//前缀递增

private:
	std::shared_ptr < std::vector < std::string >>
		check(std::size_t, const std::string&) const;
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t curr;
};

std::shared_ptr < std::vector < std::string >> StrBlobPtr::check(std::size_t i, const std::string& msg) const
{
	auto ret = wptr.lock();//vector是否存在
	if (!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw std::out_of_range(msg);
	return ret;
}


std::string& StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

StrBlobPtr & StrBlobPtr::incr()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}


StrBlobPtr StrBlob::begin(){ return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

#endif STRBLOB_H