//13.3答：拷贝一个strblob对象会增加右侧对象的引用计数，起weakcount不会变，当拷贝一个伴随类指针不会增加其shared_ptr，但是其weak_ptr会增加。

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
