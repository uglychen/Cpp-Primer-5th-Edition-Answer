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
	}//ÿ����Ϣ��һ���ļ��б�������ʱ���ָ��Ĵ���Ϣ���ļ�ָ����뵽�ļ��б���ȥ

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