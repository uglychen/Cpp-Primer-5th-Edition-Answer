/*------------------------------------------------------------------------------------


9.13´ð£º
list<int> ilist1(3, 1);
vector<int> ilist2(4, 1);
vector<double> ival(ilist1.begin(),ilist1.end());
vector<double> ival2(ilist2.begin(),ilist2.end());


9.14´ð£º
list<const char*> names;
vector<string> oldstyle;
names.assign(oldstyle.begin(), oldstyle.end());



--------------------------------------------------------------------------------------*/