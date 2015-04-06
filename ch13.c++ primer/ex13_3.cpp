//13.3�𣺿���һ��strblob����������Ҳ��������ü�������weakcount����䣬������һ��������ָ�벻��������shared_ptr��������weak_ptr�����ӡ�

#include "strBlob.h"

int main()
{
	/**
	* @brief   ex13.3. Use debug step by step to understand the whole procedure
	*/
	//! default constructor is called making the shared_ptr within it point to ,say, @0x8803018.
	//! usecount    ==  1
	//! weakcount   ==  1
	StrBlob sb;


	//! copy constructor is called making the pointer point to the same address i.e.@0x8803018.
	//! usecount    ==  2
	//! weakcount   ==  1
	StrBlob sb_duplic = sb;


	//! default constructor. the weak pointer inside points to the same address @0x8803018.
	//! usecount    ==  2
	//! weakcount   ==  2
	StrBlobPtr sb_p(sb);


	//! copy constructor is called, the pointer points to the same address i.e.@0x8803018
	//! usecount    ==  2
	//! weakcount   ==  3
	StrBlobPtr sb_p_duplic = sb_p;

	//! For the rationale that the weekcount start by 1 rather than 0 ,go to the post on SO:
	//! http://stackoverflow.com/questions/5671241/how-does-weak-ptr-work

	return 0;
}
