/*------------------------------------------------------------------------------------


9.25答：相等不会删除删除任何元素即使都是尾后迭代器。
int main()
{
vector<int> ivec{ 3, 1 };
ivec.erase(ivec.begin(),ivec.begin());
for (auto i : ivec)
cout << i << endl;
}





--------------------------------------------------------------------------------------*/