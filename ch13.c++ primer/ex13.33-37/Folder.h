#ifndef FOLDER_H
#define FOLDER_H

#include<string>
#include<set>

class Message;

class Folder
{
	friend class Message;
	friend void swap(Message &lhs, Message &rhs);
	friend void swap(Folder& lhs, Folder& rhs);
public:
	explicit Folder(const std::string &s = "") :
		name(s), messages(std::set<Message*>()){ }

	Folder(const Folder&rhs) :name(rhs.name), messages(rhs.messages)
	{
		for (const auto&m : messages)
			m->folders.insert(this);
	}//每个消息有一个文件列表，拷贝的时候把指向的此消息的文件指针插入到文件列表中去

	Folder& operator=(const Folder&);

	~Folder();

private:
	void addMsg(Message*);
	void remMsg(Message*);

	std::string name;
	std::set<Message*> messages;

};

void swap(Folder& lhs, Folder& rhs);

#endif