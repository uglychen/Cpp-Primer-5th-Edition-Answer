#include"Message.h"
#include"Folder.h"



Folder& Folder::operator = (const Folder& rhs)
{
	for (const auto &m : messages)
		m->folders.erase(this);

	name = rhs.name;
	messages = rhs.messages;

	for (const auto &m : messages)
		m->folders.insert(this);

	return *this;
}

Folder::~Folder()
{
	for (const auto &m : messages)
		m->folders.erase(this);
}

void Folder::addMsg(Message *p_m)
{
	messages.insert(p_m);
}

void Folder::remMsg(Message *p_m)
{
	messages.erase(p_m);
}

void swap(Folder &lhs, Folder &rhs)
{
	using std::swap;

	//! first, remove all messages that point to the both folders
	for (const auto &m : lhs.messages)
		m->remFld(&lhs);
	for (const auto &m : rhs.messages)
		m->remFld(&rhs);

	//! second, swap
	swap(lhs.name, rhs.name);
	swap(lhs.messages, rhs.messages);

	//! finally add pointers from new set of messgaes to new folder
	for (const auto &m : lhs.messages)
		m->addFld(&lhs);
	for (const auto &m : rhs.messages)
		m->addFld(&rhs);

}