#ifndef MESSAGE_H
#define MESSAGE_H

#include<string>
#include<set>

class Folder;

class Message
{
	friend class Folder;
	friend void swap(Message &lhs, Message &rhs);
	friend void swap(Folder &lhs, Folder &rhs);
public:
	explicit Message(const std::string &str = "") :
		contents(str){ }
	//copy constructor
	Message(const Message&m) :contents(m.contents), folders(m.folders){ }

	//copy assignment
	Message& operator=(const Message&);

	~Message();

	void save(Folder&);
	void remove(Folder&);

private:

	void addFld(Folder *f);
	void remFld(Folder *f);

	std::string contents;//message text
	std::set<Folder*> folders;//°üº¬messageµÄFolder

	void add_to_Folders(const Message&);
	void remove_from_Folders();
};

#endif 